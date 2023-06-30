#include "lists.h"

/**
 *  add_node_end - adds a new node at the end of a list_t list
 *  @head: the head of the list
 *  @str: the element to add
 *  Return: a pointer to the head of the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp = *head;
	int len = 0;

	ptr = malloc(sizeof(list_t));
	if (!ptr)
		return (NULL);

	while (str[len] != '\0')
		len++;
	ptr->str = strdup(str);
	ptr->len = len;
	ptr->next = NULL;

	if (!(*head))
	{
		*head = ptr;
		return (ptr);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = ptr;
	return (ptr);
}
