# About

This shows what happens when trying to load or link with a non-existing dynamic library.

# Results

## gcc-c-load/linux

Test: [gcc-c-load](gcc-c-load/)

Environment: dlopen/c/glibc-2.31/gcc-9.4.0/ubuntu-20.04/linux-5.4.0

Process Exit Code: NA

Process Error Message:

```
non-existing-dynamic-library-gcc-c-load: cannot open shared object file: No such file or directory
```

## gcc-c-link/linux

Test: [gcc-c-link](gcc-c-link/)

Environment: c/glibc-2.31/gcc-9.4.0/ubuntu-20.04/linux-5.4.0

Process Exit Code: 127

Process Error Message:

```plain
./non-existing-dynamic-library-gcc-c-link: error while loading shared libraries: non-existing-dynamic-library-gcc-c-link.so: cannot open shared object file: No such file or directory
```
