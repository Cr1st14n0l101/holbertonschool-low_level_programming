#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: the pointer
 * Return: the words capitalized in the string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' || s[i] == '\n')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
		else if (s[i] == '\t')
		{
			s[i] = ' ';
		}
	}
	return (s);
}
