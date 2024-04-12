#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table
 * @key: the key
 * @value: the value
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	char *v_copy;
	unsigned long int i, idx;

	if (!ht || !key || key[0] == '\0' || !value)
		return (0);
	v_copy = strdup(value);
	if (!v_copy)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = v_copy;
			return (1);
		}
	}
	node = malloc(sizeof(hash_node_t));
	if (!node)
	{
		free(v_copy);
		return (0);
	}
	node->value = v_copy;
	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}
