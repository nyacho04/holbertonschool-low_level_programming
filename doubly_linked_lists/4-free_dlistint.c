#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: head of the list
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
	{

	for (; head->prev != NULL; head = head->prev)

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
}
}
}
