#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: the linked list
 * Return: number of nodes
 **/
size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		num++;
		h = h->next;
	}
	return (num);
}
