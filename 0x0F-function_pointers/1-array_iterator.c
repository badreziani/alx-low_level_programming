#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
		while ((array++) != NULL)
			action(*array);
}
