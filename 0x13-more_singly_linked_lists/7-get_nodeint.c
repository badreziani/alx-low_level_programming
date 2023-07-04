#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of
 * a listint_t linked list
 * @head: the linked list
 * @index: the index
 * Return: nth node of h or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;

	if (head)
	{
		node = head;
		while (node && index > 0)
		{
			node = node->next;
			index--;
		}
		return (node);
	}
	return (NULL);
}
