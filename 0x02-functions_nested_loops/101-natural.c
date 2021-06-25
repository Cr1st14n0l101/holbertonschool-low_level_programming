#include <stdio.h>
#include "holberton.h"
/**
 * main - Prints the sum of the multiples of 5 or 3
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;
	int j = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			j = j + i;
		}
		printf("%d\n", j);
	}
	return (0);
}
