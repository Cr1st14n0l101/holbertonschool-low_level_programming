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

	if (*s1 < *s2)
	{
		f = (*s1 - *s2);
	}
	else if (*s1 > *s2)
	{
		f = (*s1 - *s2);
	}
	else
	{
		f = (*s1 - *s1);
	}
	return (f);
}
