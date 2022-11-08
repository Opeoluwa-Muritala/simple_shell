# Simple Shell

### Introduction
This repository is a [Holberton School](https://www.holbertonschool.com/) Project. The school project consisted in writing a shell like sh (Bourne Shell) by Stephen Bourne  , in **C**, using a limited number of standard library functions, So Instead we used ower own function that we rewrited over the past three month [Here](https://github.com/Theemiss/holbertonschool-low_level_programming/)

The goal in this project was to make us understand how a shell works. To single out some items: what is the *environment*, the difference between *functions* and *system calls*, how to create *processes* using `execve`...  

## Usage 
In order to run this program, 

Clone This Repo

`` git clone https://github.com/Opeoluwa-Muritala/simple_shell ``

compile it with  

`gcc 4.8.4 -Wall -Werror -Wextra -pedantic *.c -o shell`.  
You can then run it by invoking `./shell` in that same directory.  

### How to use it
In order to use this shell, in a terminal, first run the program:    
`prompt$ ./shell`  
It wil then display a simple prompt and wait for commands.  
`$ `   
A command will be of the type `$ command`  
This shell can handle two types of commands: builtins and normal program.
##### List of built-ins
Currently the list of built-ins:  
* cd [directory]  
Switch to the specified directory (path).
* env  
Displays the environment variable
* exit [exitstatus]  
Exit from the program with exitstatus value. 0 by default.
* getenv NAME  
Return the value of the NAME variable if it is in the environment
* help [command]  
Displays the syntax for the command, or all commands.  
* history  
Displays the last typed user .
* echo [$$] or [$?] or [$PATH]
Return pid and exit statue and PATH.
##### Command
Basicly Every Program in `$PATH`
It Support Single Word like `ls` 

It Handle Path `ls /tmp`

it Handle Options Like `ls -l`

it Handle All Three Togther Like `ls -l /var `

it Handle Command Path Also Like `/bin/ls` And All The Option And Path Like `/bin/ls -l /var`
it Handle Comments **#**

### Also
* Handle Ctrl+C: your shell should not quit when the user inputs ^C
* If no argument is given to cd the command must be interpreted like cd $HOME
* handle the command cd -
* Handle variables replacement
* Handle the $? variable
* Handle the $$ variable
* Handle The Argument file like `./hsh test` Where test is a file filled with command and builtin to excute.
### List of functions and system calls we could use
List of allowed functions and system calls

    access (man 2 access)
    chdir (man 2 chdir)
    close (man 2 close)
    closedir (man 3 closedir)
    execve (man 2 execve)
    exit (man 3 exit)
    fork (man 2 fork)
    free (man 3 free)
    fstat (man 2 fstat)
    getcwd (man 3 getcwd)
    getline (man 3 getline)
    kill (man 2 kill)
    lstat (man 2 lstat)
    malloc (man 3 malloc)
    open (man 2 open)
    opendir (man 3 opendir)
    perror (man 3 perror)
    read (man 2 read)
    readdir (man 3 readdir)
    signal (man 2 signal)
    stat (man 2 stat)
    strtok (man 3 strtok)
    wait (man 2 wait)
    waitpid (man 2 waitpid)
    wait3 (man 2 wait3)
    wait4 (man 2 wait4)
    write (man 2 write)
    _exit (man 2 _exit)
### Custom Function (Recreation of Standard Function in C)
 * _strncpy
 * _strlen
 * _putchar
 * _atoi
 * _puts
 * _strcmp
 * _isalpha
 * array_rev
 * intlen
 * _itoa
 * _strcat
 * _strcpy
 * _strchr
 * _strncmp
 * _strdup
 * _memcpy
 * _calloc
 * _realloc
 * _getenv
 * _getline
 * _strtok

For More Info About It Check The Man Page by
```
Username@your-regular-prompt:~$ man ./man_1_simple_shell
```
