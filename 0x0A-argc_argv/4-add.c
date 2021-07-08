#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds positive number
 * @argc: the string
 * @argv: array of pointers to the strings of argc
 * Return: EXIT_SUCCESS if is Success
 */
int main(int argc, char **argv)
{
	int i, sum = 0;
	char tmp;

	if (argc < 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		tmp = *argv[i];

		if ((tmp >= '0' && tmp <= '9') || tmp == '-')
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (EXIT_SUCCESS);
}
