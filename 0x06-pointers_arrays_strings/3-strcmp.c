#include "holberton.h"
/**
 * _strcmp - compare two strings
 * @s1: dirst string
 * @s2: second string
 * Return: return an integer less than, equal to, or greater than zero
 */
int _strcmp(char *s1, char *s2)
{
	int f;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 == *s2)
		{
			f = (*s1 - *s2);
		}
		else
		{
			f = (*s1 - *s2);
			return (f);
		}
		s1++;
		s2++;
	}
	return (f);
}
