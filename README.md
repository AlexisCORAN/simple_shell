# simple_shell

Project dedicated to create a simple UNIX command interpreter.

## Table of Contents

- [Description](#Description)
  - Definition of Shell
- [Project Details](#Project-Details)
  - General requirements
  - Allowed functions
- [Documentation](#Documentation)
  - Compilation
  - Testing
  - Files
- [Authors](#Authors)

## Description

### Definition of Shell

Shell is a command line interface (CLI) program that takes commands from the keyboard and gives them to the operating system to perform.

## Project Details

### General requirements

- Allowed editors: vi, vim, emacs
- All your files will be compiled on `Ubuntu 14.04 LTS`
- Your C programs and functions will be compiled with `gcc 4.8.4` using the flags `-Wall` `-Werror` `-Wextra` and `-pedantic`
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- No more than 5 functions per file
- All your header files should be include guarded
- This shell should not have any memory leaks
- Unless specified otherwise, your program must have the exact same output as `sh` (`/bin/sh`) as well as the exact same error output.

### Allowed functions

- `access` (man 2 access)
- `chdir` (man 2 chdir)
- `close` (man 2 close)
- `closedir` (man 3 closedir)
- `execve` (man 2 execve)
- `exit` (man 3 exit)
- `_exit` (man 2 \_exit)
- `fflush` (man 3 fflush)
- `fork` (man 2 fork)
- `free` (man 3 free)
- `getcwd` (man 3 getcwd)
- `getline` (man 3 getline)
- `isatty` (man 3 isatty)
- `kill` (man 2 kill)
- `malloc` (man 3 malloc)
- `open` (man 2 open)
- `opendir` (man 3 opendir)
- `perror`(man 3 perror)
- `read` (man 2 read)
- `readdir` (man 3 readdir)
- `signal` (man 2 signal)
- `stat` (\_\_ xstat) (man 2 stat)
- `lstat` (\_\_ lxstat) (man 2 lstat)
- `fstat` (\_\_ fxstat) (man 2 fstat)
- `strtok` (man 3 strtok)
- `wait` (man 2 wait)
- `waitpid` (man 2 waitpid)
- `wait3` (man 2 wait3)
- `wait4` (man 2 wait4)
- `write` (man 2 write)

## Documentation

### Compilation

Write the following commands in your terminal in order to compile:

`gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`

### Testing

Your shell should work like this in interactive mode:

```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```

Also in non-interactive mode:

```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```

## Authors

- [Alexis Coronado](https://github.com/AlexisCORAN)
- [Octavio Lafourcade](https://github.com/tavolafourcade)
