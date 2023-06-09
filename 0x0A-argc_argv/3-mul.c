#include "main.h"

/**
 * main - the entry point of the program
 * Description: multiplies two numbers.
 * @argc: the number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 2)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
