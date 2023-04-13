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
	int *arr;
	int i, size, n;

	if (min > max)
		return (NULL);
	size = max - min;
	arr = malloc((size + 1) * sizeof(*arr));
	i = 0;
	n = min;
	while (n <= max)
	{
		arr[i] = n;
		i++;
		n++;
	}
	return (arr);
}
