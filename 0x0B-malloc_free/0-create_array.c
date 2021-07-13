#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: the size of the string
 * @c: the character
 * Return: the array
 */
char *create_array(unsigned int size, char c)
{
	char * str;
	str = malloc(sizeof(c) * size);

	if (size == 0)
		return (NULL);
	return (str);
}
