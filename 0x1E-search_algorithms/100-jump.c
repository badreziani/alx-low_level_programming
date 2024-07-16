#include "search_algos.h"
#include <math.h>
/**
 * print_range - prints elements of array of ints
 * @array: the array to print
 * @l: low index
 * @h: hight index
 * Return: nothing
 */
void print_range(int *array, size_t l, size_t h)
{
	size_t i;

	for (i = l; i <= h; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}
}
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
	size_t l, b, i;

	if (!array || size == 0)
		return (-1);
	l = 0;
	b = (size_t)sqrt(size);
	for (i = 0; i < size; i += b)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
					i, i + b);
			print_range(array, i, i + b);
			return (i);
		}
		else if (i + b < size && value == array[i + b])
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
					i, i + b);
			print_range(array, i, i + b);
			return (i + b);
		}
		if (value < array[i + b])
			break;
	}
	if 
	l = i;
	while (i < l + b)
	{
		i++;
		if (value == array[i])
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
					l, l + b);
			print_range(array, l, i);
			return (i);
		}
	}
	return (-1);
}
