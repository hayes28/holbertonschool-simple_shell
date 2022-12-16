#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * exit_shell - function to exit the shell
 *
 * Return: void
 */
void exit_shell()
{
	exit(0);
}
/**
 * main_ - entry point
 * Return: 0
 */

int main_()
{

	char command[100];

	while (1) 
{
	printf("$ ");
	scanf("%s", command);
	if (strcmp(command, "exit") == 0) {
	exit_shell();
    } else 
{

}
  }
	return 0;
}
