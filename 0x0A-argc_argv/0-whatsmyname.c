#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name
 * @argc: parameters
 * @argv: array of pointers to the strings of argc
 * Return: Success if EXIT_SUCCESS
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
