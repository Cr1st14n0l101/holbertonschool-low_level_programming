#include "main.h"

/**
 * main - main function
 * @ac: counter of arguments
 * @av: argument vector
 * Return: Always 0 Succes
 */
int main(int ac, char **av)
{
	if (ac != 2)
	{
		copy_file_to_file(av[1], av[2]);
		return (0);
	}
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * copy_file_to_file - Program that copies the content of
 * a file to another file.
 * @filename: source
 * @destiny: destiny of the copy
 * Return: Always 0 Succes
 */
int copy_file_to_file(const char *filename, char *destiny)
{
	int read_df, write_df, checker, var1, var2;
	char buf[1024];

	read_df = open(filename, O_RDONLY);
	if (read_df < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	write_df = open(destiny,  O_CREAT | O_WRONLY | O_TRUNC, 0600);
	while ((checker = read(read_df, buf, 1024)) > 0)
	{
		if (write_df < 0 || write(write_df, buf, checker) != checker)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destiny);
			close(read_df);
			exit(99);
		}
	}
	if (checker < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	var1 = close(read_df);
	var2 = close(write_df);
	if (var1 < 0 || var2 < 0)
	{
		if (var1 < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", read_df);
		if (var2 < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", write_df);
		exit(100);
	}
	return (0);
}
