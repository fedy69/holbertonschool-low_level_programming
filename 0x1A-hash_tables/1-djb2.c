#include "hash_tables.h"

/**
 * hash_djb2 - algorithm demonstrating the power of 33
 * @str: string to generate hash for
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
