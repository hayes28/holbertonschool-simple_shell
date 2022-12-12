#ifndef MAIN_H
#define MAIN_H
#define	 _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#define PROMPT "$ "
#define CMD_DELIMITERS " \n"
/* environment prototypes */

extern char **environ;

int exec_cmd(char **cmd);
int is_file_exists(char *path);
char *get_cmd_path(char *cmd);

/* string prototypes */

char **split_string(char *str, char *delimiter);
void print_array(char **array);

/* builtin commands */
int main(int argc, char *argv[]);
extern char **environ;

void env_cmd(void);

#endif
