#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * index of a dlistint_t linked list.
 * @head: the head of the list
 * @index: index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;
	unsigned int c = 0;

	if (!(*head))
		return (-1);
	node = *head;
	if (index == 0)
	{
		if (node->next)
			node->next->prev = NULL;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	while (node && c <= index)
	{
		node = node->next;
		c++;
	}
	if (!node)
		return (-1);
	node->prev->next = node->next;
	if (node->next)
		node->next->prev = node->prev;
	free(node);
	return (1);
}
