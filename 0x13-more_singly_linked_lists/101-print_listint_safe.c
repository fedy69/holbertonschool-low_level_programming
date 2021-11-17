#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to first node
 * Return: number of nodes in list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	/* transverse through list */
	while (head)
	{
		count++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (head - head->next > 0)
		{
			head = head->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (count);
}