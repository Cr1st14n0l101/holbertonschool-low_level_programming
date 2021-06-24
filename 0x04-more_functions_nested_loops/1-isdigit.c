#include "holberton.h"
#include <ctype.h>

/**
 * _isdigit - check if is a digit
 * @c: the variable
 * Return: Always 1 if is a digit
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
