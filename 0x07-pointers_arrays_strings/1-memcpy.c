#include "holberton.h"
/**
 * _memcpy - copies memory area
 * @dest: destiny
 * @src: source
 * @n: n bytes from memory area src
 * Return: the destiny
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
