#include "main.h"

/**
 * main - builtins work with prompt to make interactive
 *
 * @argc: num of chars
 * @argv: chars
 *
 * Return: args
 */

int main(int argc, char *argv[])
{
	char *line = NULL;
	char **cmd = NULL;

	(void)argc;
	(void)argv;

	while (1)
	{
		line = prompt(PROMPT);

		if (line == NULL)
			return (-1);
/* Spilt the input line and execute the command */

	cmd = split_string(line, CMD_DELIMITERS);
	if (cmd == NULL)
	{
		free(line);
		continue;
	}

/* Check for built in commands */
	if (strcmp("env", cmd[0]) == 0)
	{


		env_cmd();
		free(line);
		free(cmd);
		continue;
	}

		exec_cmd(cmd);

		free(line);
		free(cmd);
	}
	return (0);
}

/**
 * prompt - printing a prompt for our simple shell
 * @prompt: the prompt
 *
 * Return: line
 */

char *prompt(char *prompt)
{
	size_t n = 0;
	ssize_t nchars;


/*getline wants the line pointer to be set to NULL to reserve space for it */

	char *line = NULL;

	(void)prompt;

	/* Print the prompt and read the input from the user */
	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "$ ", 2);
	nchars = getline(&line, &n, stdin);

	/* Check for getline() failure or EOF (Ctrl + D) */
	if (nchars == -1)
	{
		return (NULL);
	}

	return (line);
}
