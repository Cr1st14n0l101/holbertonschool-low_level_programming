#include "holberton.h"
#include <ctype.h>
/**
 * _isalpha - check for alphabetic character
 * @c: c is a variable
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
else
{
return (0);
}
}
