#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit - print the last digit
 * @n: is the variable
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
int first = abs(n % 10);
_putchar(first + '0');
return (first);
}
