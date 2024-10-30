#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* rev_string - Entry point
*
* @s: pointer to an integer
*
* Description: This function prints a message.
*
* Return: Always 0 (success)
*/

void rev_string(char *s)
{
	int i = 0;
	int b;
	char nya;


	while (s[i] != '\0')
	{
	i++;
		}
	for  (b = i - 1; b >= 0; b--)
	{
		nya = s[b];
		putchar(nya);
		}
		putchar('\n');
}
