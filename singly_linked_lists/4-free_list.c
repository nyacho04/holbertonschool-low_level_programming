#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - frees a list
 * @head: list_t list to be freeded
 */
void free_list(list_t *head)
{
	list_t *nya;

		while (head)
		{
			nya = head->next;
			free(head->str);
			free(head);
			head = nya;
		}
}
