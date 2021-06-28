#include <stdio.h>
/**
 * main - prints the first 50 fibonacchi numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long num1 = 0;
	long num2 = 1;
	long sum = 0;

	while (num1 <= 7778742049)
	{
		num1 = num2;
		num2 = sum;
		sum = num1 + num2;

		num1++;
		if (sum <= 12586269025)
		{
			printf("%ld, ", sum);
		}
		else
		{
			printf("%ld", sum);
		}
	}
	printf("\n");
	return (0);
}
