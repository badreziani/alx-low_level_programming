#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: the head of the doubly linked list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node;
	size_t c = 0;

	node = h;
	while (node)
	{
		c++;
		printf("%d\n", node->n);
		node = node->next;
	}
	return (c);
}
