#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments
 * Return: sum of parametres
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list pl;
	int sum;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(pl, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(pl, int);
	va_end(pl);
	return (sum);
}
