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
<a href="#overview">Overview</a> | <a href="#glossary">Glossary</a> | <a href="#compiler">Compiler</a> | <a href="#authors">Authors</a>
</p>

<h1>Overview</h1>
Check main-shell.h for header contents.
This file will contain used prototypes as well as all libraries included for completeing this project. Please refer to this README for info on how to compile program, what is contained in each file and credits to this contribution.





<h1>Glossary</h1>
<table>
  <tr>
    <th></th>
    <th scope="col">FILE</th>
    <th scope="col">DESCRIPTION</th>
  </tr>

  <tr>
    <td>1</td>
    <td>main.c</td>
    <td>contains our main functions to test terminal inputs</td>
  </tr>

  <tr>
    <td>2</td>
    <td>main-shell.h</td>
    <td>header file with all our libraries and prototypes</td>
  </tr>
    
  <tr>
    <td>2</td>
    <td>helpers.c</td>
    <td>includes functions for main.c support</td>
  </tr>
  
  <tr>
    <td>2</td>
    <td>helpers2.c</td>
    <td>includes functions for execute commands and execute if file exists</td>
  </tr>
  
  <tr>
    <td>2</td>
    <td>builtin.c</td>
    <td>includes arguments</td>
  </tr>
</table>

<h1>Compiler</h1>

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
<a href="https://github.com/jobabyyy">
  <img src="https://avatars.githubusercontent.com/u/71939488?s=400&u=b2c4fc7cc9177cd2359dd656202e9156a350275c&v=4" width="200" height="200" />
</a>

<a href="https://github.com/hayes28">
  <img src="https://avatars.githubusercontent.com/u/107968573?v=4" width="200" height="200" />
</a>
