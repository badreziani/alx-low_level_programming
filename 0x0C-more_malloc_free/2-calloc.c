#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of each elemenet
 * Return: a pointer to the allocated memo
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr_memo;
	unsigned int i = 0, bytes;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr_memo = malloc(nmemb * size);
	if (!arr_memo)
		return (NULL);
	bytes = nmemb * size;
	while (i < bytes)
		arr_memo[i++] = 0;
	return (arr_memo);
}
