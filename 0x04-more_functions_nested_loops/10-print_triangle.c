#include "holberton.h"
/**
 * print_triangle - prints a triangle
 * @size: the variable
 * Return: void
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int m;

		for (m = 1; m <= size; m++)
		{
			int o;

			for (o = m; o < size; o++)
			{
				_putchar(' ');
			}
			for (o = 1; o <= m; o++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
