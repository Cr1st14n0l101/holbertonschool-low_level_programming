#include "holberton.h"
/**
 * _puts - prints a sentence in reverse
 * @s: the string
 * Return: void
 */
void print_rev(char *s)
{
	int o = 0;
	int m, n;

	while (s[o] != '\0')
	{
		o++;
	}
	m = o;

	for (n = m - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
