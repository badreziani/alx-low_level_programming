#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at
 * index "index" of a listint_t linked list
 * @head: pointer to the linked list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;

	if (!head || !(*head))
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (temp && index > 0)
	{
		prev = temp;
		temp = temp->next;
		index--;
		if (!temp && index != 0)
			return (-1);
	}
	prev->next = temp->next;
	free(temp);
	temp = NULL;
	return (1);
}
