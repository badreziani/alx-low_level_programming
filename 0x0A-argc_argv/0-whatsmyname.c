#include "main.h"

/**
 * main - the entry point of the program
 * Description: prints its name, followed by a new line.
 * @argc: the number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
