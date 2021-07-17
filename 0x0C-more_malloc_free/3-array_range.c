#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates a array
 * @min: min value
 * @max: max value
 * Return: the array
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (; min <= max; min++, i++)
	{
		arr[i] = min;
	}
	return (arr);
}
