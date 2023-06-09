#include "main.h"

/**
 * main - the entry point of the program
 * Description: prints all arguments it receives.
 * @argc: the number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	return (0);
}
