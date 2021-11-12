#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "lists.h"

int _strlen(const char *str);

/**
 * add_node - Adds a node at the beginning of a 'list_t' list.
 * @head: pointer to the head node of linked list
 * @str: the string to be inserted.
 *
 * Return: Address of new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->len = _strlen(str);
	new->str = strdup(str);
	new->next = *head;
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
