#include "main.h"

/**
 * read_textfile - Function that reads a text
 * file and prints it to the POSIX standard output.
 * @filename: The name of the file.
 * @letters:  The number of letters it should read and print.
 * Return: Returns the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, length;
	char buf[4096];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	length = read(fd, buf, letters);
	buf[letters] = '\0';
	write (1, buf, length);

	close(fd);
	return (length);
}
