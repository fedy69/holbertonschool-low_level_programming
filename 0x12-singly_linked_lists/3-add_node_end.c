#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

int _strlen(const char *str);

/**
 * add_node_end - Adds a node at the end of a 'list_t' list.
 * @head: pointer to the head node of linked list
 * @str: the string to be inserted.
 *
 * Return: Address of new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last = NULL;

	if (*head)
	{
		last = *head;
		while (last->next)
			last = last->next;
	}

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->len = _strlen(str);
	new->str = strdup(str);
	if (last)
		last->next = new;
	if (!*head)
		*head = new;
	return (new);
}

/**
 * _strlen - Returns the length of a string.
 * @str: the string to be analyzed.
 *
 * Return: Number of characters in string.
 */
int _strlen(const char *str)
{
	int len = 0;

	while (str[len])
		len++;

	return (len);
}
