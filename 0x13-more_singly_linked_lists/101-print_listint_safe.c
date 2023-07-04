#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: linked list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr;
	size_t len = 0;

	if (!head)
		exit(98);
	ptr = head;
	while (ptr)
	{
		printf("[%p] %d", (void *)ptr, ptr->n);
		ptr = ptr->next;
		len++;
	}
	if (ptr->next)
		exit(98);
	return (len);
}
