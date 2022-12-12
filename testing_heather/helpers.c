#include "main.h"

/**
  * split_string - split string by delimiter
  * @str: input string
  * @delimiter: delimiters
  * Return: array of strings
  */
char **split_string(char *str, char *delimiter)
{
	char *token;
	char num_tokens = 0;
	char **array;
	char *str_copy, *str_orig;
	int i;

	str_copy = strdup(str);

	/* We don't want to modify original string */
	str_orig = strdup(str);

	token = strtok(str_orig, delimiter);

	while (token != NULL)
	{
		num_tokens++;
		token = strtok(NULL, delimiter);
	}

	if (!num_tokens)
	{
		free(str_copy);
		free(str_orig);
		return (NULL);
	}

	array = malloc(sizeof(char *) * num_tokens);

	token = strtok(str_copy, delimiter);

	for (i = 0; token != NULL; i++)
	{
		array[i] = strdup(token);
		token = strtok(NULL, delimiter);
	}
	array[i] = NULL;

	free(str_copy);
	free(str_orig);
	return (array);
}

/**
  * print_array - prints NULL terminated array of strings
  * @array: input array
  */
void print_array(char **array)
{
	int i = 0;

	if (array == NULL)
		return;

	while (array[i] != NULL)
	{
		printf("%s\n", array[i]);
		++i;
	}
}
