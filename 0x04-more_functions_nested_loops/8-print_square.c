#include "holberton.h"
/**
 * print_square - prints a square
 * @size: variable
 * Return: void
 */
void print_square(int size)
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

			for (o = 1; o <= size; o++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
