#include "hash_tables.h"

/**
 * key_index - gives you the index of a key.
 * @key: the key
 * @size: the size of ht
 * Return: the index at which the key/value pair
 * should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_idx;

	key_idx = hash_djb2(key) % size;
	return (key_idx);
}
