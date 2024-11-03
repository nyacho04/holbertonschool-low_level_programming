#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* reverse_array - Entry point
*
* @a: string to be printed
*
* @n: pointer to an integer
*
* Description: This function prints a message.
*
* Return: Always 0 (success)
*/

void reverse_array(int *a, int n)
{
	int i;
	int nya;


	for (i = 0; i < n / 2; i++)
	{
		nya = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = nya;
	}
}
