#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr:  a pointer to the memory previously allocated
 * @old_size: the old size
 * @new_size: the new size
 * Return: a pointer to the newly allocted memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;

	if (new_size > old_size)
	{
		s = malloc(new_size);
		free(ptr);
		return (s);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		s = malloc(new_size);
		free(ptr);
		return (s);
	}
	if (new_size == 0 && !ptr)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
