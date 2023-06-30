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
	int len = 0;

	ptr = malloc(sizeof(list_t));
	if (!ptr)
		return (NULL);
	while (str[len] != '\0')
		len++;
	ptr->str = strdup(str);
	ptr->len = len;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
