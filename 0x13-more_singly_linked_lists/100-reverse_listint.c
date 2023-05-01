#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to linked list
 * Returns: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr1, *ptr2;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);

	ptr1 = *head;
	ptr2 = ptr1->next;
	*head = ptr2->next;
	ptr1->next = NULL;
	while ((*head)->next != NULL)
	{
		ptr2->next = ptr1;
		ptr1 = ptr2;
		ptr2 = *head;
		*head = (*head)->next;
	}
	
	(*head)->next = ptr2;
	ptr2->next = ptr1;
	return (*head);
}
