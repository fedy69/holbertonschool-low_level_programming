#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly-linked list
 * @head: pointer to head of list
 * @index: index of the node starting from 0
 * Return: nth node of the list, or NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	/* iterate through list until index */
	while (head && i < index)
	{
		head = head->next;
		i++;
	}

	/* if no node return NULL */
	if (!head)
		return (NULL);
	else
		return (head);
}
