#include "main.h"

/**
 * sqrt_wrapper - checks for the sqrt of n
 * @n: integer
 * @i: integer
 * Return: integer
 */
int sqrt_wrapper(int n, int i)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (sqrt_wrapper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	return (sqrt_wrapper(n, 1));
}
