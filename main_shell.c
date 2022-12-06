#include "main-shell.h"

/**
 * main - entry point
 * @int: integer
 * @char: character pointer
 *
 * Return: 0
 */

int main(int ac, char **argv)
{
	char *prompt = "(holbertonschool-simple_shell) $ "; /*creating prompt line for user*/
	char *lineptr;
	size_t n = 0;
	ssize_t nchars_read;

	(void)ac;
	(void)argv;				/* delcaring void variables */

	while (1)
	{					/* creating infinite loop to execute until user stops*/

	printf("%s", prompt);
	nchars_read = getline(&lineptr, &n, stdin); /*checks getline function success or when EOF is reached*/

	if (nchars_read == -1)
	{
		printf("Shell is exiting...\n");
		return (-1); 			/*return -1 if exit fail*/
	}

	printf("%s\n", lineptr);

	free(lineptr);				/*frees allocated memory*/
	}

	return (0);
}
