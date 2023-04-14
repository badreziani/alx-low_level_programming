#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: integer
 * @max: integer
 * Return: pointer to integer
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(*arr));
	if (arr == NULL)
		return (NULL);
	while (min++ <= max)
		arr[i++] = min - 1;
	return (arr);
}
