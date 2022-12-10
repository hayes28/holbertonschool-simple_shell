<p align="center">
<h1>0x17. C - Simple Shell Project</h1>
Simple Shell is a program made to take commands and pass them to standard output and verifies command inputs from the user.

<div class="gallery">
  <a target="_blank" href="https://miro.medium.com/max/3200/0*-OOMpchdZWQZr4zw">
    <img src="https://miro.medium.com/max/3200/0*-OOMpchdZWQZr4zw" alt="Cinque Terre" width="700" height="200">
  </a>
  
</div>

<h2>Table of Contents</h2>
<p align="center">
<a href="#overview">Overview</a> | <a href="#compiler">Compiler</a> | <a href="#glossary">Glossary</a> | <a href="#authors">Authors</a>
</p>

<h1>Overview</h1>
Check main-shell.h for header contents.
This file will contain used prototypes as well as all libraries included for completeing this project. Please refer to this README for info on how to compile program, what is contained in each file and credits to this contribution.




<h1>Compiler</h1>


<h1>Glossary</h1>
<table>
  <tr>
    <th></th>
    <th scope="col">FILE</th>
    <th scope="col">DESCRIPTION</th>
  </tr>

  <tr>
    <td>1</td>
    <td>Jan - April</td>
    <td>Credit</td>
  </tr>

  <tr>
    <td>2</td>
    <td>May - August</td>
    <td>Pass</td>
  </tr>
    
  <tr>
    <td>2</td>
    <td>September - December</td>
    <td>Distinction</td>
  </tr>
</table>

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
<h1>Authors</h1>
