#include "lists.h"

/**
 * add_nodeint - adds new node at beginning of a list
 * @head: pointer to head's pointer
 * @n: data for each node
 * Return: address of new element, or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* create new node */
	listint_t *new = malloc(sizeof(listint_t));

	/* if failure return NULL */
	if (!new)
		return (NULL);

	/* copy data to new node */
	new->n = n;
	/* copy old pointer to new node pointer */
	new->next = *head;
	/* point head to new node */
	*head = new;

	return (*head);
}