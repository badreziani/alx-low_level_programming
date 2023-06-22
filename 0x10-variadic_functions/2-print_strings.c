#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: Separator of strings
 * @n: Count of strings
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pl;
	char *str;
	unsigned int i;

	va_start(pl, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(pl, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(pl);
}
