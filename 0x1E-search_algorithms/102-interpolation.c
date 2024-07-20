#include "search_algos.h"
#include <math.h>

/**
 * interpolation_search - searches for a value in a sorted array
 * of integers using the interpolation search algorithm
 * @array: the array to search in
 * @size: the number of the elements of the array
 * @value: the value to look for
 * Return: the index of the value or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t l, h, p;

	if (!array || size == 0)
		return (-1);
	l = 0;
	h = size - 1;
	p = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));

	while (value >= array[l] && value <= array[h])
	{
		printf("Value checked array[%lu] = [%d]\n", p, array[p]);
		if (array[p] == value)
		{
			return (p);
		}
		if (value > array[p])
			l = p + 1;
		else if (value < array[p])
			h = p - 1;
		p = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
	}
	printf("Value checked array[%ld] is out of range\n", p);
	return (-1);
}
