#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at a given position
 * @h: double pointer to head of list
 * @idx: index of where the new node should be added
 * @n: data for new node
 * Return: address of new node, or NULL if failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (!h || !new)
		return (NULL);

	/* put data into new node */
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	/* iterate until idx */
	while (i < idx)
	{
		if (i == idx - 1 && temp->next == NULL)
		{
			return (add_dnodeint_end(h, n));
		}
		else if (temp->next == NULL)
		{
			free(new);
			return (NULL);
		}
		else
		{
			temp = temp->next;
			i++;
		}
	}
	new->next = temp;
	new->prev = temp->prev;
	temp->prev = new;
	new->prev->next = new;
	return (new);
}
