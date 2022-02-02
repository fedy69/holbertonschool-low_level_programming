#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table to print
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, start = 1;
	hash_node_t *node;

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			while (node)
			{
				if (!start)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				start = 0;
				node = node->next;
			}
		}
		printf("}\n");
	}
}
