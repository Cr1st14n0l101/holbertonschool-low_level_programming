#include "holberton.h"
/**
 * reverse_array - reverse a string
 * @a: the array
 * @n: numbers of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp1;

	for (i = 0, j = n - 1; i <= j - 1 / 2; i++, j--)
	{
		tmp1 = a[i];
		a[i] = a[j];
		a[j] = tmp1;
	}
}
