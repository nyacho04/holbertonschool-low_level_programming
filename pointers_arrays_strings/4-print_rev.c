#include <stdio.h>
#include "main.h"
/**
* print_rev - Entry point
*
* @s: pointer to an integer
*
* Description: This function prints a message.
*
* Return: Always 0 (success)
*/

void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (length--; length >= 0; length--)
	{
		printf("%c", s[length]);
	}
	printf("\n");
}
