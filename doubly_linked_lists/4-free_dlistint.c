#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nya;

	if (head != NUL)

	while (head->prev != NULL)
			head = head->prev;
	while (nya = head != NULL)
{
	head = head->next;
	free nya;
}
}
