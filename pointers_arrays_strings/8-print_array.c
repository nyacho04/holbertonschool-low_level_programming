#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* print_array - Entry point
*
* @a: array of integers
*
* @n: pointer to an integer
*
* Description: This function prints a message.
*
* Return: Always 0 (success)
*/

void print_array(int *a, int n)
{
	int nya;

	for (nya = 0; nya < n; nya++)
	{
		printf("%d", a[nya]);
		if (nya < n - 1)
		printf(", ");
	}
}
