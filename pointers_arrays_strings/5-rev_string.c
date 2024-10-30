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
	int a = 0;

	int i;

	char nya;

	while (s[a] != '\0')
	{
		a++;
	}
	for (i = 0; i < a / 2; i++)
	{
		nya = s[i];
		s[i] = s[a - i - 1];
		s[a - i - 1] = nya;
	}
}
