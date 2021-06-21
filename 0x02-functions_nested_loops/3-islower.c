#include <stdio.h>
#include <ctype.h>
#include "holberton.h"
/**
 * _islower - checks for lowercase character
 * @c: c is a vairable
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}
}
