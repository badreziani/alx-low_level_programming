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
	if (new_size > old_size)
	{
		free(ptr);
		ptr = malloc(new_size);
	}
	else if (new_size == old_size)
		return (ptr);
	else if (ptr == NULL)
		ptr = malloc(new_size);
	else if (new_size == 0 && !ptr)
		return (NULL);
	return (ptr);
}
