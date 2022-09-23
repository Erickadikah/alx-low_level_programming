#include "hash_tables.h"

/**
 * key_index - Get the index at which a key value pair should be stored
 * @key: the key to get the index of.
 * @size: the size of array of the hash table.
 *
 * Return: the index of the key.
 *
 * Description: o uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
