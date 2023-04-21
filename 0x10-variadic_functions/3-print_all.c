#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @l: Pointer to first element in va_list
 * Return: Nothing
 */
void print_char(va_list l)
{
	printf("%c", va_arg(l, int));
}

/**
 * print_integer - prints an integer
 * @l: Pointer to first element in va_list
 * Return: Nothing
 */
void print_integer(va_list l)
{
	printf("%d", va_arg(l, int));
}
/**
 * print_float - prints a float
 * @l: Pointer to first element in va_list
 * Return: Nothing
 */
void print_float(va_list l)
{
	printf("%f", va_arg(l, double));
}

/**
 * print_string - prints a string
 * @l: Pointer to first element in va_list
 * Return: Nothing
 */
void print_string(va_list l)
{
	char *str;

	str = va_arg(l, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - prints anything.
 * @format: List of types
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	a_list p_list;
	char *sep1, *sep2;
	int i, j;
	_format _f[] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	sep1 = "";
	sep2 = ", ";
	va_start(p_list, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (_f[j].type != '\0')
		{
			if (format[i] == _f[j].type)
			{
				printf("%s", sep1);
				_f[j].func(p_list);
				sep1 = sep2;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(p_list);
}
