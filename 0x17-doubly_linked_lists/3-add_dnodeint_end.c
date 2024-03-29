#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: the head of the list
 * @n: the number to add
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *node = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (head && (*head))
	{
		node = *head;
		while (node->next)
		{
			node = node->next;
		}
		new->prev = node;
		node->next = new;
	}
	else
		*head = new;
	return (new);
}
