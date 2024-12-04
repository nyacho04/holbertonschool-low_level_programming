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
	new_node->next = *head;
	new_node->len = _strlen(str);
	*head = new_node;

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
