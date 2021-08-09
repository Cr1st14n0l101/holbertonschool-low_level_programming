#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: Name of the file to create.
 * @text_content: A NULL terminated string to write to the file.
 * Return: Always Success 1 or -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, tmp;
	int i = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC);
	if (fd == -1)
		return (-1);

	while (text_content[i])
		i++;
	tmp = write(fd, text_content, i);
	if (tmp != i)
		return (-1);

	close(fd);
	return (1);
}
