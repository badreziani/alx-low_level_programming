#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: unsigned int
 * @c: char
 * Return: NULL if size = 0,
 * or a pointer to array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(size * sizeof(c));
	if (arr == NULL)
		return (NULL);

	return (arr);
}
