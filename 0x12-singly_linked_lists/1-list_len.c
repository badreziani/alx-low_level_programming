#include "lists.h"

/**
 * list_len -  returns the number of elements in a linked list_t list
 * @h: the linked list
 * Return:  the number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len += 0;
		h = h->next;
	}

	return (len);
}
