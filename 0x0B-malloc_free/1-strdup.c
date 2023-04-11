#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: pointer to char
 * Return: NULL if str = NULL
 * or a pointer to the duplicate string
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int size;

	if (str == NULL)
		return (NULL);

	size = 0;
	while (str[size] < '\0')
		size++;

	dup = (char *)malloc(size * sizeof(char) + 1);
	if (dup == NULL)
		return (NULL);

	size = 0;
	while (str[size] != '\0')
	{
		dup[size] = str[size];
		size++;
	}
	dup[size] = '\0';

	return (dup);
}
