#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of array
 * @a: pointer
 * @n: variable
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}
		i++;
	}
	printf("\n");
}
