#include "main.h"

/**
 * print_rev - prints a string, in reverse,
 * followed by a new line
 * @s: pointer to char variable
 * Return: nothing
 */
void print_rev(char *s)
{
	int l; /* variable to store lenght of s */
	int i;

	l = _strlen(s);
	for (i = l - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
