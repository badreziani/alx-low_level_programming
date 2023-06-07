#include "main.h"

/**
 * _put_recursion - Prints a string, followed by a new line
 * @s: string to print
 * Return: nothing
 */
void _puts_recurstion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
