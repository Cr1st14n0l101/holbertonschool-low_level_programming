#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer tho the sstring
 * Return: the number converted to int, 0 if b is NULL or there
 * is one or more chars in the string b that is not 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned int i = 0;

	if (!b)
		return (0);
	while (b[i])
	{
		if (b[i] == '1' || b[i] == '0')
			num = num * 2 + (b[i] - '0');
		else
			return (0);
		i++;
	}
	return (num);
}
