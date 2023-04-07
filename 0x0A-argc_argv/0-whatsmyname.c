#include <stdio.h>
#include <stdlib.h>

/**
 * main - this program wille prints its name
 * @argc: integer
 * @argv: array of pointers to char
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (EXIT_SUCCESS);
}
