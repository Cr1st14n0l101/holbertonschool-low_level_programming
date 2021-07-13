#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: the string
 * Return: the pointer
 */
char *_strdup(char *str)
{
	int i, j;
	char *dest;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;

	dest = malloc(i * sizeof(str[0]));
	for (j = 0; j < i; j++)
		dest[j] = str[j];
	dest[j] = '\0';
	return (dest);
	free(dest);
}
