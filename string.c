#include "main-shell.h"
#include <string.h>

// STRING LENGTH COPY //

/**
 * _strlen - return length of a string.
 *
 * @s: Int
 *
 * Return: Value of string.
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;
	return (l);
}

// STRING COPY FUNCTION //

/**
 * _strncpy - write a function that copies a string.
 *
 * @dest: Variable1
 * @src: Variable2
 * @n: Variable3
 *
 * Return: 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;


	for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];
	for ( ; i < n; i++)
	dest[i] = '\0';
	return (dest);
}

// STRING CONCATENATE FUNCTION //

/**
 * *_strncat - concatenate 2 strings but do
 * not include null.
 *
 * @dest: char1
 * @src: char2
 * @n: char3
 *
 * Return: 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0;
	int i;

	while (dest[dlen] != '\0')
	{
		dlen++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++, dlen++)
	{
		dest[dlen] = src[i];
	}
	dest[dlen] = '\0';
	return (dest);
}

// STRING COMPARE VALUE FUNCTION //

/**
 * _strcmp - compare two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: compared values
 */

int _strcmp(char *s1, char *s2)
{
	int i, b;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}

	b = s1[i] - s2[i];
	return (b);
}