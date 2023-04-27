#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

struct list_t
{
	char *str;
	int len;
	struct list_t *next;
}
typedef struct list_t list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif
