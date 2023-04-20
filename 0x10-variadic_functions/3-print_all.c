#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include "3-printing_functions.c"
/**
 * print_all - prints anything.
 * @format: List of types
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list p_list;
	int i, j;
	_format print_f[] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string}
	};

	va_start(p_list, format);
	i = 0;
	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == print_f[j].c)
			{
				print_f[j].f(p_list);
				if (format[i + 1] != '\0')
					printf(", ");
			}
			j++;
		}
		i++;
	}
}
