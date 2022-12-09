<p align="center">
<h1>0x17. C - Simple Shell Project</h1>
Simple Shell is a program made to take commands and pass them to standard output and verifies command inputs from the user.


We will be using HSH to read and interpert our code to standard output
To compile our shell you will be using the gcc command.
Example:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```
This is how you will compile to be in interactive mode:
```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```
However, we also want it to be non-interactive:
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
