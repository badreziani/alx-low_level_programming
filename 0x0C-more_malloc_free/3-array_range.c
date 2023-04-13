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
	int *arr, i, tmp;

	if (min > max)
		return (NULL);
	tmp = max - min;
	arr = malloc((tmp + 1) * sizeof(*arr));
	i = 0;
	tmp = min;
	while (tmp <= max)
	{
		arr[i] = tmp;
		i++;
		tmp++;
	}
	return (arr);
}
