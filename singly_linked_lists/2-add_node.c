#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;
	char *dup_str;

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
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
