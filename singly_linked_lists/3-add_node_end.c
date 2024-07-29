#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last = *head;
	char *dup_str;
	unsigned int len = 0;

	while (str[len])
		len++;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = dup_str;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
	*head = new_node;
	return (new_node);
	}
	while (last->next != NULL)
	{
	last = last->next;
	}
	last->next = new_node;

	return (new_node);
}
