#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at
 * a given position
 * @head: pointer to the linked list
 * @idx: index where to insert
 * @n: data to insert
 * Return:  the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *node;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	temp = *head;
	while (temp && idx > 1)
	{
		temp = temp->next;
		idx--;
		if (!temp && idx != 1)
		{
			free(node);
			return (NULL);
		}
	}
	node->next = temp->next;
	temp->next = node;
	return (node);
}
