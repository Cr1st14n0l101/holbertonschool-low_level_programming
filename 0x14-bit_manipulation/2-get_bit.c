#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: is a number to represents in binary form
 * @index: the index, starting from 0 of the bit you want to get
 * Return: returns the value of a bit at a given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits = 64;
	if (index <= bits)
		return ((n >> index) & 1);
	return (-1);
}
