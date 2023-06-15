#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to be allocated
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *memo;

	memo = malloc(b);
	if (!memo)
		return (NULL);
	return (memo);
}
