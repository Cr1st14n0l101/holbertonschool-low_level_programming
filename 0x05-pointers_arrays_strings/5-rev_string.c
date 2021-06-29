#include "holberton.h"
/**
 * rev_string - print the sentence normal and in reverse
 * @s: the pointer
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, k, m;
	char tmp1, tmp2;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	j = i;

	for (m = 0, k = j - 1; m < j / 2; m++, k--)
	{
		tmp1 = s[m];
		tmp2 = s[k];
		s[m] = tmp2;
		s[k] = tmp1;
	}
}
