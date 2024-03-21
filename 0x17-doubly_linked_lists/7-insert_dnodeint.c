#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a linked list.
 * @head: the head of the list
 * Return: the sum of all the data of the list or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = NULL;
	int sum = 0;

	node = head;
	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
