#include "holberton.h"
/**
 * _strncpy - copies a string
 * @dest: the destiny
 * @src: the source
 * @n: total of bytes
 * Return: The destiny
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
