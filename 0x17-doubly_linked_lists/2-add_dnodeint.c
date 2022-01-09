#include "lists.h"

/**
 * add_dnodeint - adds a new node at beginning of a doubly-linked list
 * @head: double pointer to head of list
 * @n: data for new node
 * Return: address of new element, or NULL if failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head)
		(*head)->prev = new;

	*head = new;
	return (new);
}
