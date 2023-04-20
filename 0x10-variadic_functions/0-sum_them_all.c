#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: Count of args
 * Return: sum of params
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p_list;
	int sum;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(p_list, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(p_list, int);

	va_end(p_list);

	return (sum);
}
