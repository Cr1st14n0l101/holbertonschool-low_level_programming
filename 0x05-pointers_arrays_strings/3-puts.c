#include "holberton.h"
/**
 * _puts - prints a sentence
 * @str: the string
 * Return: void
 */
void _puts(char *str)
{
	int l = 0;

	while(str[l] != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
