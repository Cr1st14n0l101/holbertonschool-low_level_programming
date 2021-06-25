#include "holberton.h"
/**
 * print_times_table - prints 3, 5, 12 tables
 * @n: the variable
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			_putchar(',');
			for (j = 1; j <= n; j++)
			{
				if (i * j < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar((i * j % 10) + '0');
				}
				else if (i * j >= 10 && i * j <= 99)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((i * j / 10) + '0');
					_putchar((i * j % 10) + '0');
				}
				else if (i * j >= 100 && i * j <= 200)
				{
					_putchar(' ');
					_putchar((i * j / 100) + '0');
					_putchar((i * j / 10 % 10) + '0');
					_putchar((i * j % 10) + '0');
				}
				if (j < 12)
				{
					_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}
