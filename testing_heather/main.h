#ifndef MAIN_H
#define MAIN_H

/* environment prototypes */

extern char **environ;

int exec_cmd(char **cmd);
int is_file_exists(char *path);
char *get_cmd_path(char *cmd);

/* string prototypes */

char **split_string(char *str, char *delimiter);
void print_array(char **array);

/* builtin commands */

extern char **environ;

void env_cmd(void);

#endif
