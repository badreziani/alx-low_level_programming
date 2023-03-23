#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9,
 * followed by a new line
 * Return: void
 */

void print_numbers(void)
{
	int i = 48;
	for (i = 48; i <= 57; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
