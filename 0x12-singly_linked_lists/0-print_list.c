#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: a pointer to the head of the linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nb_nodes = 0;

	if (!h)
		return (0);
	while (h->next)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		nb_nodes++;
	}
	return (nb_nodes);
}
