#include <stdio.h>
#include <unistd.h>
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
	int nya = 0;

	while (s[nya] != '\0')
	{
		nya++;
	}

	while (nya > 0)
	{
		nya--;
		write(1, &s[nya], 1);
	}

	write(1, "\n", 1);
}
