#include "holberton.h"
/**
 * _strcpy - copy a string
 * @dest: the destiny
 * @src: the source
 * Return: the destiny
 */
char *_strcpy(char *dest, char *src)
{
	int i, n;
	int j = 0;

	for (j = 0; src[j] != 0; j++)
	{
	}
	n = j;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
