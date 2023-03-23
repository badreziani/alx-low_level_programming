#include "main.h"

/**
 * print_line -  checks for checks for a digit (0 through 9)
 * @n: 1st integer
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
