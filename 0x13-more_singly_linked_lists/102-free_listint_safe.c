#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to linked list
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
        listint_t *ptr;
        size_t len = 0;

        if (*h == NULL || h == NULL)
                return (0);

        ptr = *h;
        while (ptr != NULL)
        {
                if (ptr->next != NULL)
                {
                        ptr = ptr->next;
                        free(*h);
                        *h = ptr;
                        len++;
                }
        }
        free(*h);
        *h = NULL;
        len++;
        return (len);
}
