#include <stdio.h>
#include "main.h"
/**
* swap_int - Entry point
*
* @b: pointer to an integer
*
* @a: pointer to an integer
*
* Description: This function prints a message.
*
* Return: Always 0 (success)
*/

void swap_int(int *a, int *b)
{
	int nya;

	nya = *a;
	*a = *b;
	*b  = nya;
}
