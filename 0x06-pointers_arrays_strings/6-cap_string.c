#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: the pointer
 * Return: the words capitalized in the string
 */
char *cap_string(char *s)
{
	int i, j;
	char sep[13] = {' ', '\t', '\n', ',', ';', '.',
	'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{			
			if (s[i] == sep[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
			
		}
	}
	return (s);
}
