#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat
 * @s1: First String
 * @s2: Second String
 * @n: the size
 * Return: the pointer that concatenates both strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	int l = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		;
	}
	if (n >= j)
	{
		n = j;
	}

	str = malloc(((i + n) * sizeof(s1[0])) + 1);
	if (str == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < i; k++)
	{
		str[k] = s1[k];
	}
	for (k = k; k < i + n; k++, l++)
	{
		str[k] = s2[l];
	}
	str[k] = '\0';
	return (str);
}
