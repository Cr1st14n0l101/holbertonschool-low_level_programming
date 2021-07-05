#include "holberton.h"
#include <stddef.h>

/**
 * _strchr - function that locates a caracter in a string
 * @s: the pointer
 * @c: a character
 * Return: a pointer to the first occurrence of the character c in the string s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
