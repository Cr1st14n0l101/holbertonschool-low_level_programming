#include <stdio.h>
#include "holberton.h"
/**
 * main - Prints the sum of the multiples of 5 or 3
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			j = j + i;
		}
		++i;
	}
	printf("%d\n", j);
	return (0);
}
