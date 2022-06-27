#include <stdio.h>
#include <dlfcn.h>

int main(void) {
    void *handle = dlopen("non-existing-dynamic-library-gcc-c-load", RTLD_NOW);

    if (!handle) {
        fprintf(stderr, "failed to load library: %s\n", dlerror());
        return 0;
    }

    dlerror();

    fprintf(stderr, "succeeded loading library?! how?\n");
    return 0;
}