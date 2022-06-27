all: non-existing-dynamic-library-gcc-c-load

clean:
	rm -f non-existing-dynamic-library-gcc-c-load

non-existing-dynamic-library-gcc-c-load: main.c
	gcc -Os -Wall -Werror -o $@ $< -ldl
	ldd $@
