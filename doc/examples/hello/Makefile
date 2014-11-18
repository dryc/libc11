CPPFLAGS = -nostdinc -I$(DESTDIR)/include
CFLAGS   = -std=c99
LDFLAGS  = -nostdlib -L$(DESTDIR)/lib -static
LDADD    = $(DESTDIR)/lib/libc.a

PROGRAMS = hello

all: $(PROGRAMS)

hello: $(DESTDIR)/lib/libc11/crt0.o hello.o
	$(CC) $(LDFLAGS) -o $@ $^ $(LDADD)

%.o: %.c
	$(CC) $(CPPFLAGS) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) $(PROGRAMS) *.o *~

.PHONY: all clean
