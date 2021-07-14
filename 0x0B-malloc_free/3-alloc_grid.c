#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional
 * array of integers
 * @width: width
 * @height: height
 * Return: returns a pointer to a 2 dimensional
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **str;

	if (width <= 0 || height <= 0)
		return (NULL);

	str = malloc(width * sizeof(*str));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		str[i] = malloc(height * sizeof(str));

		if (str[i] == NULL)
		{
			for (; i >= 0; i--)
				free(str[i]);
			free(str);
			return (NULL);
		}
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			str[i][j] = 0;
		}
	}
	return (str);
}
