#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: First String
 * @s2: Second String
 * @n: the size
 * Return: the pointer that concatenates both strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    int i;
    int len ;
	unsigned int len2;
    unsigned int j;
    char *newstr;

    if (s1 == NULL || s2 == NULL)
    {
        s1 = "";
        s2 = "";
    }
    for (len = 0; s1[len] != '\0'; len++)
    {
    }
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
	}
	if (n >= len2)
	{
		n = len2;
	}

    newstr = malloc((len + n + 1));
    if (newstr == NULL)
    {
        return (00);
    }
    for (i = 0; i < len; i++)
    {
        newstr[i] = s1[i];
    }
    for (j = 0; j < n; j++)
    {
        newstr[i + j] = s2[j];
    }
    newstr[i + j] = '\0';
    return (newstr);
}
