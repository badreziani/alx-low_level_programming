#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: integer
 * Return: -1 if n < 0, or an integer
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n == 0)
			return (1);
		return (factorial(n - 1));
	}
}
