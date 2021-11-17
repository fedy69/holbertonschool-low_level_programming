#include "lists.h"

/**
 * sum_listint - returns the sum of all data of a list
 * @head: pointer to head node
 * Return: sum of data or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	unsigned int x = 0;

	while (head)
	{
		x += head->n;
		head = head->next;
	}
	return (x);
}