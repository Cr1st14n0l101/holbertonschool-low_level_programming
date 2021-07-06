#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix  of integers.
 * @a: the pointer
 * @size: the size of the string
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int l = 0;
	int r = 0;

	for (i = 0; i < size; i++)
	{
		l = l + a[i];
		a = a + size;
	}
	a = a - size;

	for (j = 0; j < size; j++)
	{
		r = r + a[j];
		a = a - size;
	}
	printf("%d, %d\n", l, r);
}
