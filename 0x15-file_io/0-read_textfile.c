#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output
 * @filename: the filename
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, size, wl;
	char *buffer;

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	size = read(fd, buffer, letters);

	wl = write(STDOUT_FILENO, buffer, size);

	close(fd);

	return (wl);
}
