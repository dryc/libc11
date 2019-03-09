/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <string.h> /* for size_t, strlen() */
#include <stdint.h> /* for uintptr_t */

/* The cast forces it to the correct size, even if size_t is 32-bit
 * This checks for zeroes 4 or 8 bytes at a time, by subtracting 1 causing
 * underflow to 0xFF on the zero bytes...
 *   0x00  46  F3  01
 * - 0x01  01  01  01
 * -------------------
 *   0xFF  45  F2  00
 * ...masking it with the inverse which cancels out values which have the high
 * bit set. This makes the 0 bytes 0xFF and bytes which have the high bit set,
 * such as 0xF2 which when subtracted will also have the high bit set, cancel
 * out.
 *   0xFF  45  F2  FE
 * & 0xFF  B9  0D  00
 * -------------------
 *   0xFF  01  00  00
 * and then masking by 0x80 to remove any leftovers:
 *   0xFF  01  00  00
 * & 0x80  80  80  80
 * -------------------
 *   0x80  00  00  00
 * Now, any zero bytes will be 0x80, and non-zero bytes will be zero.
 * This isn't foolproof, as if bits 24-30 are clear and bit 31 is set (on a
 * 32-bit machine), this will be a false positive.
 * http://graphics.stanford.edu/~seander/bithacks.html  */
#define ONES (size_t)0x0101010101010101ULL
#define HIGH_BITS (size_t)0x8080808080808080ULL
#define haszero(v) (((v) - ONES) & ~(v) & HIGH_BITS)

/**
 * @date   2013-06-11
 * @author Arto Bendiken
 * @see    http://libc11.org/string/strlen.html
 */
size_t
strlen(const char* const s) {
  const char* p = s;
  /* Avoid unaligned access. Even on platforms which allow unaligned access,
   * doing this with an unaligned pointer puts us at risk of crossing a page
   * boundary before finding the null byte.
   * When we are aligned, this is completely safe and has been trusted since
   * the early 90s. */
  while ((uintptr_t)p & (sizeof(void*) - 1)) {
    if (*p++ == '\0') {
      return p - s - 1;
    }
  }
  const size_t* longptr = (const size_t*)p;

  for (;;) {
    const size_t value = *longptr++;
    if (haszero(value)) {
      p = (const char *)(longptr - 1);
      for (size_t i = 0; i < sizeof(size_t); i++) {
        /* Check the individual bits. There is a chance that haszero may
         * misfire. */
        if (*p++ == '\0') {
          return p - s - 1;
        }
      }
    }
  }
  /* technically unreachable */
  return p - s - 1;
}
