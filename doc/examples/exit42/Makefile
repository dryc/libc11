CPPFLAGS = -nostdinc -I$(DESTDIR)/include
CFLAGS   = -std=c99
LDFLAGS  = -nostdlib -L$(DESTDIR)/lib -static
LDADD    = $(DESTDIR)/lib/libc.a

PROGRAMS = exit42

all: $(PROGRAMS)

exit42: $(DESTDIR)/lib/libc11/crt0.o exit42.o
	$(CC) $(LDFLAGS) -o $@ $^ $(LDADD)

%.o: %.c
	$(CC) $(CPPFLAGS) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) $(PROGRAMS) *.o *~

.PHONY: all clean
