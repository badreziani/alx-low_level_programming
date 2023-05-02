#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: linked list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *ptr;
	size_t len = 0;

	ptr = head;
	while (ptr != NULL)
	{
		printf("[%p] %d", head, head->n);
		ptr = ptr->next;
		len++;
	}
	if(ptr->next != NULL)
		exit(98);
	return (len);
}
