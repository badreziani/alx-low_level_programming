#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to linked list
 * Return: a pointer to the first node of the reversed list²
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr1, *ptr2;

	if ((*head)->next == NULL)
		return (*head);

	ptr1 = NULL;
	while (*head != NULL)
	{
		ptr2 = (*head)->next;

		(*head)->next = ptr1;
		ptr1 = *head;
		*head = ptr2;
	}
	*head = ptr1;
	return (*head);
}
