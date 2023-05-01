#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to linked list
 * Returns: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *next;

	current = *head;
	*head = (*head)->next;
	current->next = NULL;
	next = *head;
	(*head)->next = current;
	while (next != NULL)
	{
		current = *head;
		*head = next->next;
		next = *head;
		(*head)->next = current;
	}
	return (*head);
}
