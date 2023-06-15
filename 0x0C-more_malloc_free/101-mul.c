#include "main.h"
/**
 * _puts - prints a string
 * @s: the string to print
 * Return: the number of printed characters
 */
int _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		_putchar(s[i++]);
	return (i);
}
/**
 * main - the entry point of the program
 * @argc: the number of params
 * @argv: array of params
 * Description: multiplies two positive numbers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;

	if (argc != 3)
	{
		_puts("Error\n");
		exit(98);
	}
}
