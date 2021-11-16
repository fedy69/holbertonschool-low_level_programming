#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a list
 * @head: pointer to head
 * @index: index of the node
 * Return: pointer of node or NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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