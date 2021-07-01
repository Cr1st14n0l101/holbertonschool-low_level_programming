#include "holberton.h"
/**
 * _strcat - concatenates two strings
 * @dest: destiny
 * @src: source
 * Return: Returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int j, k, i, n, dest_len;

	for (j = 0; dest[j] != '\0'; j++)
	{
	}
	dest_len = j;

	for (k = 0; src[k] != 0; k++)
	{
	}
	n = k;

	for (i = 0; i < n && src[i] != '\0'; ++i)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
