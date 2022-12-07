#include "main-shell.h"

/**
 * main - entry point, Printing a prompt for our simple shell
 * @ac: argument count
 * @argv: array of passed arguments
 *
 * Return: 0
 */
int main(__attribute__((unused)) int ac, char **argv)
{
	char *prompt = "(simple_shell) $ ", *lineptr = NULL, *line_copy = NULL, *tok;
	size_t n = 0;
	ssize_t nchars_read;
	int i, num_tokens = 0;
	const char *delim = " \n";

	while (1)
	{			/* creating infinite loop to execute until user stops*/
		printf("%s", prompt);
		nchars_read = getline(&lineptr, &n, stdin);
		/*checks getline function success or when EOF is reached*/
	if (nchars_read == -1)
	{
		printf("Shell is exiting...\n");
		return (-1); /*return -1 if exit fail*/
	}
	line_copy = malloc(sizeof(char) * nchars_read);
	/* allocates space for a copy of the lineptr */
	if (line_copy == NULL)
	{
		perror("tsh: memory allocation error");
		return (-1);
	}
	strcpy(line_copy, lineptr);
	/* copy lineptr to lineptr_copy */
	tok = strtok(lineptr, delim);
	/* split string (lineptr) into an array of words */
	/*calculate the total number of tokens */
	while (tok != NULL)
	{
		num_tokens++;
		tok = strtok(NULL, delim);
	}
	num_tokens++;

	argv = malloc(sizeof(char *) * num_tokens);
	/* allocates space to hold array of strings */
	tok = strtok(line_copy, delim);
	/* stores each token in argv array */
	for (i = 0; tok != NULL; i++)
	{
		argv[i] = malloc(sizeof(char) * strlen(tok));
		strcpy(argv[i], tok);

		tok = strtok(NULL, delim);
	}
	argv[i] = NULL;

	printf("%s\n", lineptr);
	}
	free(line_copy);/*frees allocated memory*/
	free(lineptr);
	return (0);
}
