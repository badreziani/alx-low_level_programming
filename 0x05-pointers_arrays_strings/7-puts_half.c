#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer to a char variable
 * Return: nothing
 */
void puts_half(char *str)
{
	int i;

	if (_strlen(str) % 2 == 0)
		i = _strlen(str) / 2;
	else
		i = _strlen(str) / 2 + 1;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
