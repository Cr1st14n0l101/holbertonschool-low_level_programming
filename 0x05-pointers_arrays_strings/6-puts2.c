#include "holberton.h"
/**
 * puts2 - prints every other character, starting with the first
 * @str: the string
 * Return: void
 */
void puts2(char *str)
{
	int m = 0;
	int l = 0;

	while (str[m] != 0)
	{
		m++;
	}

	while (l < m)
	{
		_putchar(str[l]);
		l += 2;
	}
	_putchar('\n');
}
