#include "search_algos.h"
/**
 * linear_search - searches for a value in
 * an array of integers using the Linear search algorithm
 * @array: the array to search in
 * @size: the number of the elements of the array
 * @value: the value to look for
 * Return: the index of the value or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx = 0;

	if (!array)
		return (-1);
	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}
