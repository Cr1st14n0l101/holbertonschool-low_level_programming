#include "holberton.h"
/**
 * puts2 - prints every other character, starting with the first
 * @str: the string
 * Return: void
 */
void puts2(char *str)
{
	int l = 0;

	while (str[l] != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
