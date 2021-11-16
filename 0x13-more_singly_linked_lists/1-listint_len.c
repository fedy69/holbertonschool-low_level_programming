#include "lists.h"

/**
 * listint_len - returns number of elements in linked list
 * @h: pointer to list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}