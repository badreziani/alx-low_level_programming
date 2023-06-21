#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: pointer to the 1st element of array
 * @size: integer
 * @cmp: pointer to function
 * Return: an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]) != 0)
				return (a);
		}
		return (-1);
	}
	return (-1);
}
