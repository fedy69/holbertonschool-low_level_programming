#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given position
 * @head: pointer to pointer of head
 * @idx: index of list where new node should be added
 * @n: data
 * Return: address of new node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int i = 0;

	
	if (!new)
		return (NULL);

	
	new->n = n;

	if (idx == 0)
	{
		
		new->next = *head;
		
		*head = new;
		return (new);
	}
	
	while (temp && i < idx)
	{
		
		new->next = temp->next;
		if (i == idx - 1)
		{
			
			temp->next = new;
			return (new);
		}
		else
			
			temp = temp->next;
	i++;
	}
	return (NULL);