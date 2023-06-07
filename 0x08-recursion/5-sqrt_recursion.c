#include "main.h"

/**
 * _sqrt - calculate the square root of a number
 * @x: the number
 * @y: the starting square root
 * Return: the calculated square root
 */
int _sqrt(int x, int y)
{
	if (y * y == x)
		return (y);
	if (y * y > x)
		return (-1);
	return (_sqrt(x, y + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: the natural square root of the number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
