#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* free_dlistint - frees a doubly linked list
*
* @head: the head of the doubly linked list
*
* Return: void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *nya;

	while (head != NULL)
	{
		nya = head;
		head = head->next;
		free(nya);
	}
}
