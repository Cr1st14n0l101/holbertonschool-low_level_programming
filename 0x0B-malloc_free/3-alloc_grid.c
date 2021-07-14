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

	str = (int **) malloc(height * sizeof(*str));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		str[i] = (int *) malloc(width * sizeof(str));

		if (str[i] == NULL)
		{
			for (j = 0; j <= i; j++)
				free(str[j]);
			free(str);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{	
			str[i][j] = 0;
		}
	}
	return (str);
}
