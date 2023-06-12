#include "main.h"
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: the size of the array
 * @c: the character to initialize the array with
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int idx;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (!arr)
		return (NULL);
	for (idx = 0; idx < size; idx++)
	{
		arr[idx] = c;
	}
	return (arr);
}
