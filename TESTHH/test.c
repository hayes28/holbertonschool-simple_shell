#include "main-shell.h"

/**
 * main - entry point, Printing a prompt for our simple shell
 * @ac: argument count
 * @argv: array of passed arguments
 *
 * Return: 0
 */

int main(int ac, char **argv)
{
	char *prompt = "(holbertonschool-simple_shell) $ ";
	char *lineptr = NULL, *lineptr_copy = NULL;
	size_t n = 0;
	ssize_t nchars_read;
	int i;
	const char *delim = " \n";
	int num_tokens = 0;
	char *token;

	(void)ac;	/* delcaring void variables */

	while (1)
	{			/* creating infinite loop to execute until user stops*/

		printf("%s", prompt);
		nchars_read = getline(&lineptr, &n, stdin);
		/*checks getline function success or when EOF is reached*/

	if (nchars_read == -1)
	{
		printf("Shell is exiting...\n");
		return (-1); 				/*return -1 if exit fail*/
	}
	lineptr_copy = malloc(sizeof(char) * nchars_read);
	/* allocates space for a copy of the lineptr */
	if (lineptr_copy == NULL)
	{
		perror("tsh: memory allocation error");
		return (-1);
	}
	strcpy(lineptr_copy, lineptr);
	/* copy lineptr to lineptr_copy */

	token = strtok(lineptr, delim);
	/* split string (lineptr) into an array of words */
	/*calculate the total number of tokens */

	while (token != NULL)
	{
		num_tokens++;
		token = strtok(NULL, delim);
	}
	num_tokens++;

	argv = malloc(sizeof(char *) * num_tokens);
	/* allocates space to hold array of strings */

	token = strtok(lineptr_copy, delim);
	/* stores each token in argv array */

	for (i = 0; token != NULL; i++)
	{
		argv[i] = malloc(sizeof(char) * strlen(token));
		strcpy(argv[i], token);

		token = strtok(NULL, delim);
	}
	argv[i] = NULL;

	printf("%s\n", lineptr);
	}

	free(lineptr_copy);		/*frees allocated memory*/
	free(lineptr);


	return (0);
}
