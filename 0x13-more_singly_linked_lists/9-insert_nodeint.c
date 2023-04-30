#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the linked list
 * @idx: index where to insert
 * @n: data to insert
 * Return:  the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *prev, *node;

	if (head == NULL)
		return (NULL);
	prev == NULL;
	temp = *head;
	while (temp != NULL && idx > 0)
	{
		prev = temp;
		temp = temp->next;
		idx--;
		if (temp == NULL && idx > 0)
			return (NULL);
	}

	node = malloc(sizeof(listint_t));
	node->n = n;
	node->next = temp;
	if (prev != NULL)
		prev->next = node;
	else
		*head == node;
	return (node);
}
