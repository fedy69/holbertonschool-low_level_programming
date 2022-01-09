#include "lists.h"

/**
 * add_dnodeint_end - adds new node at end of a doubly-linked list
 * @head: double pointer to head of list
 * @n: data for new node
 * Return: address of new element, or NULL if failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (current->next)
		current = current->next;

	current->next = new;
	new->prev = current;
	return (new);
}
