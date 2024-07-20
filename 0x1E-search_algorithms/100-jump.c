#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array
 * of integers using the Jump search algorithm
 * @array: the array to search in
 * @size: the number of the elements of the array
 * @value: the value to look for
 * Return: the index of the value or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t low, high, step;

	if (!array || size == 0)
		return (-1);
	low = 0;
	high = step = (size_t) sqrt(size);
	printf("Value checked array[%lu] = [%d]\n", low, array[low]);
	while (high < size && value > array[high])
	{
		printf("Value checked array[%lu] = [%d]\n", high, array[high]);
		low = high;
		high += step;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	step = 0;
	while (low + step <= high)
	{
		printf("Value checked array[%lu] = [%d]\n",
				low + step, array[low + step]);
		if (value == array[low + step])
			return (low + step);
		step++;
		if (low + step >= size)
			return (-1);
	}
	return (-1);
}
