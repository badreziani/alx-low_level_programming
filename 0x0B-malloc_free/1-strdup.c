#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string tu duplicate
 * Return: a pointer to the copy string
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int len, idx;

	if (!str)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;
	dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	for (idx = 0; idx < len; idx++)
	{
		dup[idx] = str[idx];
	}
	return (dup);
}
