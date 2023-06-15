#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: the minimum
 * @max: the maximum
 * Return:  pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (min <= max)
		arr[i++] = min++;
	return (arr);
}
