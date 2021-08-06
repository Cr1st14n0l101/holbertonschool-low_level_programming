#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 * Return:  Returns the number of bits you would
 * need to flip to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;

	n = n ^ m;
	while (n > 0)
	{
		if (n & 1)
			counter++;
		n = n >> 1;
	}
	return (counter);
}
