#include "holberton.h"
/**
 * is_prime_number - check if n is prime number
 * @n: the number
 * Return: If is prime numbers (1) else (0)
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime_number_checker(n , 2));
}

int _prime_number_checker(int n, int i)
{
	if (i == n)
		return (1);
	else if (n % i == 0)
		return (0);
	return (_prime_number_checker(n , i + 1));
}
