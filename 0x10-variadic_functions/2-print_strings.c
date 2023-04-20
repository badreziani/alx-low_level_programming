#include <stdarg.h>
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
	va_list p_list;
	char *str;
	unsigned int i;

	va_start(p_list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(p_list, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (separator != NULL && i < n - 1)
			printf(", ");
	}
	printf("\n");
}
