#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - prints the last digit
 * Description: this function prints the
 * last digit of a given number
 * @n: integer
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int d = 0;

	d = _abs(n) % 10;
	_putchar(d + '0');
	return (d);
}
