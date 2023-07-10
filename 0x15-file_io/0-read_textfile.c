#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: the filename
 * @letters: the letters to be printed to the file
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, size;
	char *buf;

	buf = malloc(sizeof(letters));
	if  (!buf || !filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	size = read(fd, buf, letters);
	size = write(STDOUT_FILENO, buf, size);

	return (size);
}
