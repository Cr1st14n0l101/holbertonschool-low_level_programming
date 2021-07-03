#include "holberton.h"
/**
 * leet - function that encodes a string into 1337
 * @s: the pointer
 * Return: the string decided to 1337
 */
char *leet(char *s)
{
	int i, j;
	char num[10] = "aAeEoOtTlL";
	char let[10] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == num[j])
			{
				s[i] = let[j];
			}
		}
	}
	return (s);
}
