#include "main.h"

/**
 * main - Entry point of the programm
 * Description: copies the content of a file to another file
 * @ac: number of passed args
 * @av: array of passed args
 * Return: 0 if success
 */
int main(int ac, char **av)
{
	int file_from, file_to, flag, flag2;
	char buffer[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	file_to = open(av[2], O_WRONLY | O_CREAT |
			O_TRUNC, S_IRUSR | S_IWUSR |
			S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close(file_from), exit(99);
	}
	flag = 1;
	while (flag)
	{
		flag = read(file_from, buffer, 1024);
		if (flag == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		if (flag > 0)
		{
			flag2 = write(file_to, buffer, flag);
			if (flag2 != flag)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	flag = close(file_from);
	if (flag == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	flag = close(file_to);
	if (flag == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
	return (0);
}
