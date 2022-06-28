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

## dotnet-cs-link/linux

Test: [dotnet-cs-link](dotnet-cs-link/)

Environment: DllImport/cs/dotnet-6.0.6/ubuntu-20.04/linux-5.4.0

Process Exit Code: 134

Process Error Message:

```plain
Unhandled exception. System.DllNotFoundException: Unable to load shared library 'non-existing-dynamic-library-dotnet-cs-link-lib' or one of its dependencies. In order to help diagnose loading problems, consider setting the LD_DEBUG environment variable: libnon-existing-dynamic-library-dotnet-cs-link-lib: cannot open shared object file: No such file or directory
  at Program.<<Main>$>g__Lib|0_0()
  at Program.<Main>$(String[] args) in /home/rgl/Projects/non-existing-dynamic-library/dotnet-cs-link/Program.cs:line 6
Aborted (core dumped)
```
