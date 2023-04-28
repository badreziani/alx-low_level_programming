#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: list to free
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
