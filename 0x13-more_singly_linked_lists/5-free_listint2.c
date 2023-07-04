#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list
 * @head: pointer to the list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head && *head)
	{
		while (*head)
		{
			ptr = (*head)->next;
			free(*head);
			*head = ptr;
		}
		*head = NULL;
	}
}
