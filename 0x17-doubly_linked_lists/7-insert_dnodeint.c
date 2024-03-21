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
	dlistint_t *new, *node = NULL,  *prev = NULL, *next = NULL;
	unsigned int c = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	node = *head;
	while (node)
	{
		prev = node->prev;
		next = node->next;
		if (idx == c)
		{
			new->prev = prev;
			new->next = next;
			return (new);
		}
		c++;
		node = node->next;
	}
	*head = new;
	return (new);
}
