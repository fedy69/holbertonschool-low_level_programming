#include "hash_tables.h"

/**
 * key_index - gives index of a key
 * @key: key
 * @size: size of array of hash table
 * Return: index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size == 0)
		return (0);

	return (hash_djb2(key) % size);
}
