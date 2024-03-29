#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: the head of the list
 * @index: the index of the node
 * Return: the node at index or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c = 0;
	dlistint_t *node = NULL;

	node = head;
	while (node)
	{
		if (c == index)
			return (node);
		c++;
		node = node->next;
	}
	return (NULL);
}
