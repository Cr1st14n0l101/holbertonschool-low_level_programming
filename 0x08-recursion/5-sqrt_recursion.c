#include "holberton.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the radicand
 * Return: the index of the raciand
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (-1);
	return (_sqrt_check(n, 1));
}

/**
 * _sqrt_check - check the square root of a number
 * @n: the radicand
 * @a: start in 1
 * Return: the square root of a number
 */
int _sqrt_check(int n, int a)
{
	if (a * a > n)
		return (-1);
	else if (a * a == n)
		return (a);
	return (_sqrt_check(n, a + 1));
}
