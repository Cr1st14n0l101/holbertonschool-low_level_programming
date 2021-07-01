#include "holberton.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: destiny
 * @src: source
 * @n: most bytes from src
 * Return: dest (both strings concatenated)
 */
char *_strncat(char *dest, char *src, int n)
{
	int j, i, dest_len;

	for (j = 0; dest[j] != '\0'; j++)
	{
	}
	dest_len = j;

	for (i = 0; i < n && src[i] != '\0'; ++i)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
