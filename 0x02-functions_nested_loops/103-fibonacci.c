#include <stdio.h>
/**
 * main - prints the even fibonacchi numbers until 4000000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long num1 = 0;
	long num2 = 0;
	long sum = 1;

	while (num1 <= 4000000)
	{
		num1 = num2;
		num2 = sum;
		sum = num1 + num2;

		num1++;
		if (sum < 14930352 && sum % 2 == 0)
		{
			printf("%ld, ", sum);
		}
		else if (sum == 14930352 && sum % 2 == 0)
		{
			printf("%ld", sum);
		}
	}
	printf("\n");
	return (0);
}
