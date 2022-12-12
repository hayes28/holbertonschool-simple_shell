#ifndef MAIN_SHELL_H
#define MAIN_SHELL_H

#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/* FUNCTION PROTOTYPES */
int main(int ac, char **argv);

/* GETLINE PROTOTYPE */
ssize_t getline(char **lineptr, size_t *n, FILE *stream);

/* STRING PROTOTYPES */
int _strlen(char *s);
char *_strncpy(char *dest, char *src, int n);
char *_strncat(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);

/* BUITIN PROTOTYPE */
int builtin(int argc, char *argv[]);
#endif