#include "hash_tables.h"

/**
 * *hash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key you are looking for
 * Return: value associated with the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int bin = 0;
	hash_node_t *entryItem = NULL;

	if (!ht || !key || !*key)
		return (NULL);

	bin = key_index((const unsigned char *)key, ht->size);

	entryItem = ht->array[bin];
	while (entryItem != NULL)
	{
		if (strcmp(key, entryItem->key) == 0)
			return (entryItem->value);
		entryItem = entryItem->next;
	}
	if (entryItem == NULL || entryItem->key == NULL)
		return (NULL);
	else
		return (entryItem->value);
}
