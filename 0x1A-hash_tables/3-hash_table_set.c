#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update key/value for
 * @key: key. cannot be empty
 * @value: value associated with the key. must be duplicated, but can be empty
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *head = NULL, *new = NULL;

	/* check if no hash table or key or value*/
	if (!ht || !key || !value)
		return (0);

	/* set head of table to current index */
	i = key_index((const unsigned char *)key, ht->size);
	head = ht->array[i];

	while (head)
	{
		if (strcmp(head->key, key) == 0)
		{
			free(head->value);
			head->value = strdup(value);
			if (!head->value)
				return (0);
			else
				return (1);
		}
		head = head->next;
	}

	/* add new node */
	new = add_node(key, value);
	if (!new)
		return (0);
	/* point new node to index of array */
	new->next = ht->array[i];
	ht->array[i] = new;
	return (1);
}

/**
 * add_node - adds new hash node
 * @key: key of string
 * @value: value of string
 * Return: node or NULL if failure
 */
hash_node_t *add_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}

	new->value = strdup(value);
	if (!new->value)
	{
		free(new);
		return (0);
	}
	return (new);
}
