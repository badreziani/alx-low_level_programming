#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 * @filename: the file name
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, size, num_letters;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	size = read(fd, buffer, letters);
	if (size == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	num_letters = write(STDOUT_FILENO, buffer, letters);
	free(buffer);
	close(fd);
	if (num_letters != letters)
	{
		return (0);
	}
	return (num_letters);
}
