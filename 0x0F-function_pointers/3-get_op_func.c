#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - returns a pointer to the function
 * that corresponds to the operator given as a parameter
 * @s: pointer to char
 * Return: always 0
 */
int (*get_op_func(char *s))(int, int)
{
	op_t operations[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
	};
	int a;

	if (s != NULL)
	{
		for (a = 0; a < 5; a++)
		{
			if (*(operations[a].op) == *s)
				return (operations[a].f);
		}
	}
	return (0);
}
