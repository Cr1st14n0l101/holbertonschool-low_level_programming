#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always success (0)
 */
int main(int argc, char *argv[])
{
	int a, i;
	char *c;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	c = (char *)main;
	for (i = 0; i < a; i++)
	{
		if (i == a - 1)
		{
			printf("%02hhx\n", c[i]);
			break;
		}
		else
		{
			printf("%02hhx ", c[i]);
		}
	}
	return (0);
}
