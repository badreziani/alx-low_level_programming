#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: Separator of numbers
 * @n: Count of numbers
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pl;
	unsigned int i;

	va_start(pl, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pl, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
