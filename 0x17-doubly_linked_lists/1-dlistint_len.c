#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: the head of the list
 * Return: the number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlintint_t *node;
	size_t c = 0;

	node = h;
	while (node)
	{
		c++;
		node = node->next;
	}
	return (c);
}
