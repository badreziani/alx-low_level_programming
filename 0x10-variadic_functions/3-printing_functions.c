#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
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
 * print_str - prints a char
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
