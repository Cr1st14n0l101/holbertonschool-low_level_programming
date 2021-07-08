#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies 2 numbers
 * @argc: the string
 * @argv: array of pointers to the strings of argc
 * Return: EXIT_SUCCESS if is Success
 */
int main(int argc, char **argv)
{
	int m;
	(void)**argv;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	m = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", m);
	exit(EXIT_SUCCESS);
}
