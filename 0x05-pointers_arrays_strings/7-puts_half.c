#include "holberton.h"
/**
 * puts_half - prints the half of a string
 * @str: the pointer
 * Return: void
 */
void puts_half(char *str)
{
	int i, j, n;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	j = i;

	if (i % 2 == 0)
	{
		for (j = i / 2; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	} else if (i % 2)
	{
		for (n = (i - 1) / 2; n < i - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
