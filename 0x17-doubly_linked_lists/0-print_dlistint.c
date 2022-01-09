#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
