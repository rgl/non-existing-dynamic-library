all: non-existing-dynamic-library-gcc-c-link

clean:
	rm -f non-existing-dynamic-library-gcc-c-link *.so

# NB if you really want to see this working, use:
#		LD_LIBRARY_PATH=$PWD ./non-existing-dynamic-library-gcc-c-link
non-existing-dynamic-library-gcc-c-link: main.c
	gcc -Os -Wall -Werror -fpic -shared -o $@.so lib.c
	gcc -Os -Wall -Werror -o $@ $< non-existing-dynamic-library-gcc-c-link.so
	ldd $@
