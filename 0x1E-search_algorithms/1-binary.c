#include "search_algos.h"
/**
 * print_array - prints the element of an array of integers
 * @array: sorted array of integers where to look for value
 * @left: left index
 * @right: right index
 * Return: Nothing
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		if (i == right)
			printf("%d\n", array[i]);
		else
			printf("%d ", array[i]);
	}
}
/**
 * binary_search - searches for a value in
 * an array of integers using the Binary search algorithm
 * @array: sorted array of integers where to look for value
 * @size: the number of the elements of the array
 * @value: the value to look for; the value apears once in the array
 * Return: the index of the value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, middle;

	if (!array || size == 0)
		return (-1);
	left = 0;
	right = size - 1;
	while (left <= right)
	{
		print_array(array, left, right);
		middle = (size_t)(right + left) / 2;
		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			left = middle + 1;
		else
			right = middle - 1;
	}
	return (-1);
}
