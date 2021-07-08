#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints thu numbers of the arguments
 * @argc: the parameters
 * @argv: array of pointers to the strings of argc
 * Return: Success if EXIT_SUCCESS
 */
int main(int argc, char **argv)
{
	int flag = 0;
	(void)**argv;
	while (argc--)
	{
		flag++;
	}
	printf("%d\n", flag - 1);
	exit(EXIT_SUCCESS);
}
