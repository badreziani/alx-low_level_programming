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
	int *arr, i, n;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));
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
