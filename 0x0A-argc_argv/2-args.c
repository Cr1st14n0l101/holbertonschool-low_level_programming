#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the arguments it receives
 * @argc: the parameter(s)
 * @argv: the pointer to the strings of argc
 * Return: Success if EXIT_SUCCESS
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	exit(EXIT_SUCCESS);
}
