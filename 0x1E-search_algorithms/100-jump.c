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
	size_t l, h, b, i;

	if (!array || size == 0)
		return (-1);
	l = 0;
	b = (size_t)sqrt(size);
	h = b;
	while (h < size)
	{
		if (array[l] == value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", l, h);
			i = l;
			while (1)
			{
				printf("Value checked array[%lu] = [%d]\n", i, array[i]);
				if (array[i] == value)
					break;
				i++;
			}
			return (l);
		}
		else if (array[h] == value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", l, h);
			i = l;
			while (1)
			{
				printf("Value checked array[%lu] = [%d]\n", i, array[i]);
				if (array[i] == value)
					break;
				i++;
			}
			return (h);
		}
		else if (value < array[h])
		{
			printf("Value found between indexes [%lu] and [%lu]\n", l, h);
			i = l;
			while(1)
			{
				printf("Value checked array[%lu] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
				if (i == h)
					break;
				i++;
			}
			return (-1);
		}
		else
		{
			printf("Value checked array[%lu] = [%d]\n", l, array[l]);
			printf("Value checked array[%lu] = [%d]\n", h, array[h]);
		}
		l = h;
		h += b;
	}

	for (i = l; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]", i, array[i]);
		if (array[i] == value)
		{
			printf("Value found between indexes [%lu] and [%lu]", l, h);
			i = l;
			while (1)
			{
				printf("Value checked array[%lu] = [%d]", i, array[i]);
				if (array[i] == value)
					break;
				i++;
			}
			return (h);
		}
	}
	return (-1);
}
