#include "3-calc.h"
/**
 * op_add - adds both numbers
 * @a: first number
 * @b: second number
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts both numbers
 * @a: first number
 * @b: second number
 * Return: the difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies both numbers
 * @a: first number
 * @b: second number
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div -  divide both numbers
 * @a: first number
 * @b: second number
 * Return: the result of the division of a by b
 */
int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - gives the module of both numbers
 * @a: first number
 * @b: second number
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
