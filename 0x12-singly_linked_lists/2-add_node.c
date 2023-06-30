#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: the head of the list
 * @str: the element to add
 * Return: a pointer to the head of the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	if (!(*head) || !head)
		return (NULL);
	ptr = malloc(sizeof(*head));
	if (!ptr)
		return (NULL);
	ptr->str = strdup(str);
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
