#include "lists.h"

/**
 * pop_listint - deletes head node of linked list
 * @head: pointer to pointer of head
 * Return: head node's data (n)
 */

int pop_listint(listint_t **head)
{
	/* create new head pointer */
	listint_t *newhead;
	int ret;

	/* if linked list is empty return 0 */
	if (!head || !*head)
		return (0);

	/* set new node to head ptr */
	newhead = *head;
	/* set ret to value of head */
	ret = newhead->n;
	/* set head to next node */
	*head = newhead->next;
	/* free head */
	free(newhead);

	return (ret);
}