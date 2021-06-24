#include "holberton.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the variable
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int m;

		for (m = 1; m <= n; m++)
		{
			int o;

			for (o = 1; o <= n; o++)
			{
				if (m == o)
				{
					_putchar('\\');
				}
				else if (m > o)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
