#include <stdio.h>
#include "function_pointers.h"

/**
 * print_str - prints a string
 * @str: pointer to char
 * Return: nothing
 */
void print_str(char *str)
{
	printf("%s", str);
}

/**
 * print_name - prints a name
 * @name: pointer to char
 * @f: pointer to function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
