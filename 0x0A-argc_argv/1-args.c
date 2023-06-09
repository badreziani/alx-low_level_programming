#include "main.h"

/**
 * main - the entry point of the program
 * Description: prints the number of arguments passed into it
 * @argc: the number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char __attribute((unused)) *argv[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	else
		 printf("0\n");
	return (0);
}
