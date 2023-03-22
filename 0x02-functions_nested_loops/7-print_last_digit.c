#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: number is last digit result
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int d;

	d = (n % 10);

	if (d < 0)
	{
		d = (-1 * d);
	}

	_putchar(d + '0');
	return (d);
}
