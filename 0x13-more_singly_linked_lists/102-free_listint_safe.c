#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to linked list
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *ptr;
	size_t len = 0;

	if (*h == NULL || h == NULL)
		return (0);

	while (*head != NULL)
	{
		ptr = *head;
		*head =  (*head)->next;
		free(ptr);
		len++;
	}
	*head = NULL
	return (len);
}
