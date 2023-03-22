#include "main.h"
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

	d = n % 10;
	_putchar(d);
	return (d);
}
