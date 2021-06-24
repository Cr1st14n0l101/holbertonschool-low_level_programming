#include <ctype.h>
#include "holberton.h"

/**
 * _isupper - Check if c is upper
 * @c: variable
 * Return: Always 0 (Upper)
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
