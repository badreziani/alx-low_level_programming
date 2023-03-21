#include "main.h"
/**
 * print_alphabet - prints the alphabet in lower case
 * Description: this function will print
 * the alphabet in lowercase
 * Return: nothing
 */
void print_alphabet(void)
{
	int i = 97;
	while (i <= 123)
	{
		_putchar (i);
		i++;
	}
	_putchar ('\n');
}
