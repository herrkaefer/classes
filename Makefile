IDIR = src
ODIR = build
SRCDIR = src
TESTDIR = tests
TARGETDIR = bin

CC = gcc
CFLAGS = -I$(IDIR) -DDEBUG -g -Wall -O2

# LDIR = -L./lib3rd/libyaml
# LIBS = -lyaml
LDIR =
LIBS =

_OBJ = satellite.o earth.o mars.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))
_LIBSRC = satellite.c earth.c mars.c
LIBSRC = $(patsubst %,$(SRCDIR)/%,$(_LIBSRC))
LIBTARGET = libplanet.a
_TESTSRC = test_satellite.c test_earth.c test_mars.c test.c
TESTSRC = $(patsubst %,$(TESTDIR)/%,$(_TESTSRC)) $(LIBSRC)
TESTTARGET = $(TARGETDIR)/selftest
EXESRC = $(SRCDIR)/main.c $(LIBSRC)
EXETARGET = $(TARGETDIR)/nbs


.PHONY: clib cdll test exe clean

$(ODIR)/%.o: $(SRCDIR)/%.c
	$(CC) -c $< -o $@ $(CFLAGS)

clib: $(OBJ)
	ar rcs $(LIBTARGET) $(ODIR)/*.o

cdll: $(OBJ)
	$(CC) -shared -o $@ $^ -Wl,--out-implib,$(LIBTARGET) $(LDIR) $(LIBS)

test:
	$(CC) $(TESTSRC) -o $(TESTTARGET) $(CFLAGS) $(LDIR) $(LIBS)
	$(TESTTARGET)

exe:
	$(CC) $(EXESRC) -o $(EXETARGET) $(CFLAGS) $(LDIR) $(LIBS)

clean:
	rm -rf $(TARGETDIR)/* *.dll *.a *so $(ODIR)/* py/*.c
