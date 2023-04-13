#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min; integer
 * @max: integer
 * Return: pointer to integer
 */
int *array_range(int min, int max)
{
	int *arr, i, tmp;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(*arr));
	tmp = min;
	for (i = 0; tmp < max; i++, tmp++)
		arr[i] = tmp;

	return (arr);
}
