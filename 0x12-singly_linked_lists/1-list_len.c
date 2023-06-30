#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: the head of the linked list
 * Return: returns the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	if (!h)
		return (0);
	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
