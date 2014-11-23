/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <string.h> /* for NULL, size_t, strncat() */

/**
 * @date   2014-11-23
 * @author Vlad Gluhovsky
 * @see    http://libc11.org/string/strncat.html
 */
char*
strncat(char* restrict s1,
        const char* restrict s2,
        size_t n) {
		
	size_t i = 0, j = 0;
	while (s1[i++])
		;
			
	while (j < n && s2[j])
		s1[i++] = s2[j++];
			
	s1[i] = 0;

  return s1;
}
