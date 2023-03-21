#include "main.h"
/**
 * print_sign - prints the sign of number
 * Description: this function will print
 * the sign of a given number
 * @n: the number to check
 * Return: + if > 0, 0 if = 0 and - if < 0
 */
int print_sign(int n)
{
	if (n > 0)
		return ('+');
	else if (n == 0)
		return (0);
	else
		return ('-');
}
