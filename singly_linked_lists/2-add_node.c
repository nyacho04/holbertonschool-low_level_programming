#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* add_node - adds a new node at the end of a list
*
* @head: the head of the list
*
* @str: the string to be added
*
* Return: the address of the new node, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL || str == NULL)
	return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);

		return (NULL);
	}

	while (str_copy[len] != '\0')
		len++;

	new_node->str = str_copy;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
