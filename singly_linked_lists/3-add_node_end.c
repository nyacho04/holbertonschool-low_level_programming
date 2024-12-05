#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* add_node_end - adds a new node at the end of a list
*
* @head: the head of the list
*
* @str: the string to be added
*
* Return: the address of the new node, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	if (!head)
	{
	return (NULL);
	}

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
	return (NULL);
	}
	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;
	new_node->len = _strlen(str);

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
		temp->next = new_node;

	return (new_node);
}

/**
 * _strlen - returns the length of a string
 * @str: string
 * Return: len
 */

int _strlen(const char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
	len++;
	}

	return (len);
}
