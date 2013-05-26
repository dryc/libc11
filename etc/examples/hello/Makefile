CPPFLAGS = -nostdinc -I../../../src/include
CFLAGS   =
LDFLAGS  = -nostdlib -L../../../src/.libs -static
LDADD    = -lc

PROGRAMS = hello

all: $(PROGRAMS)

hello: ../../../sys/crt0.o hello.o
	$(CC) $(LDFLAGS) -o $@ $^ $(LDADD)

hello.o: hello.c
	$(CC) $(CPPFLAGS) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) $(PROGRAMS) *.o *~

.PHONY: all clean
