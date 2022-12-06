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
	
	(void)ac;
	(void)argv;


	printf("%s", prompt);
	getline(&lineptr, &n, stdin);
	printf("%s\n", lineptr);

	free(lineptr);
	return (0);		
}
