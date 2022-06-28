# About

This shows what happens when trying to load or link with a non-existing dynamic library.

Also see:

* https://github.com/rgl/raise-illegal-instruction
* https://github.com/rgl/gitlab-ci-vagrant/blob/master/windows/provision-procdump-as-postmortem-debugger.ps1

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

## dotnet-cs-link/windows

Test: [dotnet-cs-link](dotnet-cs-link/)

Environment: DllImport/cs/dotnet-6.0.6/windows-2022-10.0.20348.768

Process Exit Code: -532462766

Process Error Message:

```plain
Unhandled exception. System.DllNotFoundException: Unable to load DLL 'non-existing-dynamic-library-dotnet-cs-link-lib' or one of its dependencies: The specified module could not be found. (0x8007007E)
   at Program.<<Main>$>g__Lib|0_0()
   at Program.<Main>$(String[] args) in C:\Users\vagrant\Desktop\non-existing-dynamic-library\dotnet-cs-link\Program.cs:line 6
```

Windows Logs Application:

| Level       | Source                  | Event ID | Evidence                                                 |
|-------------|-------------------------|----------|----------------------------------------------------------|
| Error       | .NET Runtime            | 1026     | The process was terminated due to an unhandled exception |
| Error       | Application Error       | 1000     | Faulting application name, Exception code                |
| Information | Windows Error Reporting | 1001     | Event Name: APPCRASH                                     |

Windows System Level:

This also invokes the system level postmortem debugger and [a core dump (aka minidump) can be captured by procdump](https://github.com/rgl/gitlab-ci-vagrant/blob/master/windows/provision-procdump-as-postmortem-debugger.ps1).
