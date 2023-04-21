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
	va_list args;
	char *sep1 = "", *sep2 = ", ";
	int count1 = 0, count2 = 0;
	_format types[] = {
        {'c', print_char},
        {'i', print_int},
        {'f', print_float},
        {'s', print_string},
        {'\0', NULL}
        };

	va_start(args, format);
	while (format !=  NULL && format[count1] != '\0')
	{
		count2 = 0;
		while (types[count2].z != '\0')
		{
			if (format[count1] == types[count2].z)
			{
				printf("%s", sep1);
				types[count2].f(args);
				sep1 = sep2;
			}
			count2++;
		}
		count1++;
	}
	printf("\n");
	va_end(args);
}
