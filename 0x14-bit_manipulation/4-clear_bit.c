#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: the number to set
 * @index: position to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bits = 64;

	if (index <= bits)
	{
		*n = *n &  (~(1 << index));
		return (1);
	}
	return (-1);
}
