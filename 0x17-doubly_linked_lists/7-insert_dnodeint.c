#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: the head of the list
 * @idx: the postion
 * @n: the data
 * Return:  the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *node = NULL;
	unsigned int c = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (!(*h))
	{
		*h = new;
		return (new);
	}
	if (idx == 0)
	{
		(*h)->prev = new;
		new->next = *h;
		*h = new;
		return (new);
	}
	node = *h;
	while (1)
	{
		new->prev = node;
		new->next = node->next;
		if (node->next)
			node->next->prev = new;
		node->next = new;
		c++;
		if (c == idx)
			return (new);
	}
	return (NULL);
}
