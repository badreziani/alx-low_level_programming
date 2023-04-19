#include <stdlib.h>
#include "3-calc.h"
#include "3-op_functions.c"

/**
 * get_op_func - returns a pointer to the function
 * that corresponds to the operator given as a parameter
 * @s: pointer to char
 * Return: always 0
 */
int (*get_op_func(char *s))(int, int)
{
	op_t opts[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
	};
	int a;

	if (s[0] != '\0')
	{
		for (a = 0; a < 5; a++)
		{
			if (*(opts[a].op) == *s)
				return (opts[a].f);
		}
	}
	return (0);
}
