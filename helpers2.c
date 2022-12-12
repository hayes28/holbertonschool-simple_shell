#include "main.h"

/**
  * exec_cmd - fork() and execv() given command
  * @cmd: an array of command and its parameters (as for execv())
  * Return: 0 on success, -1 on failure
  */
int exec_cmd(char **cmd)
{
	int stat_loc;
	pid_t child_pid;
	char *path;

	if (cmd == NULL)
		return (-1);

	path = get_cmd_path(cmd[0]);
	if (path == NULL)
	{
		printf("Command `%s` not found in the $PATH\n", cmd[0]);
		return (-1);
	}


	child_pid = fork();

	if (child_pid < 0)
	{
		perror("Fork failed");
		free(path);
		return (-1);
	}

	if (child_pid == 0)
	{
		if (execv(path, cmd) < 0)
		{
			perror(cmd[0]);
			free(path);
			return (-1);
		}
	} else
	waitpid(child_pid, &stat_loc, WUNTRACED);

	free(path);
	return (0);
}

/**
  * file_exists - checks if a file exists
  * @path: filesystem path
  * Return: 1 if file exists, 0 otherwise
  */
int file_exists(char *path)
{
	struct stat statbuf;

	if (stat(path, &statbuf) == 0)
		return (1);

	return (0);
}

/**
  * get_cmd_path - returns the full path to the command. Uses $PATH for this.
  * @cmd: command
  * Return: full command path
  */
char *get_cmd_path(char *cmd)
{
	char *path_env, **paths, *path;
	int i = 0;
	size_t path_size;

	if (cmd == NULL)
		return (NULL);
	path_env = getenv("PATH");
	if (path_env == NULL)
		return (NULL);
	paths = split_string(path_env, ":");
	if (paths == NULL)
		return (NULL);

	while (paths[i] != NULL)
	{
		path_size = sizeof(char) * (strlen(paths[i]) + strlen(cmd) + 2);
		path = malloc(path_size);
		strcpy(path, paths[i]);
		strcat(path, "/");
		strcat(path, cmd);
		strcat(path, "\0");

		if (file_exists(path))
		{
			free(paths);
			return (path);
		}

		free(path);
		++i;
	}

	free(paths);
	return (NULL);
}
