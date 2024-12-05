#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* free_list - frees a linked list
*
* @head: the head of the linked list
*
* Return: void
*/

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
	}
	free(tmp);
}
