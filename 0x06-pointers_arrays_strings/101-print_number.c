#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer
 * Return: nothing
 */
void print_number(int n)
{
	int tmp, p;
	int no_d = 0;

	tmp = n;
	p = 1;
	if (n < 0)
	{
		tmp *= -1;
		n *= -1;
		_putchar('-');
	}
	while (tmp > 0)
	{
		no_d++;
		tmp /= 10;
	}
	while (no_d > 1)
	{
		no_d--;
		p *= 10;
	}
	while (p >= 1)
	{
		_putchar((n / p) % 10 + '0');
		p /= 10;
	}
}
