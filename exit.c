#include "main.h"

/**
 * exitshell - function to exit
 * @arr: arr
 * @buffer: buffer
 * @status: status
 */
void exitshell(char **arr, char *buffer, int status)
{
	if (arr[2] != NULL && arr[1] != NULL)
	{
		printf("exit error: too many arguments\n");
		return;
	}
	if (arr[1] != NULL)
	{
		status = atoi(arr[1]);

		if (status < 0)
		{
			printf("exit: '%s' is an invalid exit value\n", arr[1]);
			return;
		}
	}
	free(buffer);
	fflush(stdin);
	exit(status);
}
