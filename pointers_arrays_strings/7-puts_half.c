#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* puts_half - Entry point
*
* @str: pointer to an integer
*
* Description: This function prints a message.
*
* Return: Always 0 (success)
*/

void puts_half(char *str)
{
	int nya = 0;

	int n;

	while (str[nya] != '\0')
		nya++;

	if (nya % 2 == 0)
		n = nya / 2;
	else
		n = (nya + 1) / 2;

	while (str[n] != '\0')
	{
		putchar(str[n]);
		n++;
	}
	putchar('\n');
}
