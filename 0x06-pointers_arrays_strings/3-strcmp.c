#include "holberton.h"
/**
 * _strcmp - compare two strings
 * @s1: dirst string
 * @s2: second string
 * Return: return an integer less than, equal to, or greater than zero
 */
int _strcmp(char *s1, char *s2)
{
	int l1, l2, f;
	int i = 0;
	int j = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	l1 = i - 1;

	while (s2[j] != '\0')
	{
		j++;
	}
	l2 = j - 1;

	if (l1 < l2)
	{
		f = (s1[l1] - s2[l2]);
	}
	else if (l1 > l2)
	{
		f = (s1[l1] - s2[l2]);
	}
	else
	{
		f = (s1[l1] - s1[l1]);
	}
	return (f);
}
