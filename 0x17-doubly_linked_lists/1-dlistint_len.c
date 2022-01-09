#include "lists.h"

/**
 * dlistint_len - returns number of elements in a doubly linked list
 * @h: pointer to head of list
 * Return: length of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
