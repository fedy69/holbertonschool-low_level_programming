#include "hash_tables.h"

/**
 *  *hash_table_create - function that creates a hash table
 *  @size: size of the array
 *  Return: pointer to newly-created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *create;

	if (!size)
		return (NULL);

	create = malloc(sizeof(hash_table_t));
	if (!create)
		return (NULL);

	create->size = size;
	create->array = calloc(size, sizeof(hash_node_t *));
	if (!create->array)
	{
		free(create);
		return (NULL);
	}

	return (create);
}
