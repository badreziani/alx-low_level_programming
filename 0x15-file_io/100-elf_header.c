#include "main.h"

/**
 * main - entry point of the program
 * @argc: count of args
 * @argv: array og args
 * Description: displays the information contained
 * in the ELF header at the start of an ELF file
 * Return: 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	if (argc < 2)
	{
		dprintf(STDERR_FILENO, "Error: You didn't specify the file.\n");
		exit(98);
	}
	return (0);
}
