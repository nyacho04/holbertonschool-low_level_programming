#include <stdio.h>
#include "main.h"
/**
* print_to_98 - This function prints a message.
*
* @n: The character to be checked
*
* Return: Always 0 (success)
*/
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("98\n");
}
