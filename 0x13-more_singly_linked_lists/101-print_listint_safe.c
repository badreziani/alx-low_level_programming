#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: linked list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *printed_node;
	size_t len = 0;
	while (head != NULL)
	{
		printed_node = head;
		printf("[%p] %d", head, head->n);
		len++;
	}
	if(printed_node->next != NULL)
		exit(98);
	return (len);
}
