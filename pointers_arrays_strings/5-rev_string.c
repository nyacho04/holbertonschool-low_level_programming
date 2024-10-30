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
	for (b = 0; b < i / 2; b++)
	{
		nya = s[b];
		s[b] = s[i - b - 1];
		s[i - b - 1] = nya;
	}
}
/**
* main - Entry point
*
* Description: This function prints a message.
*
* Return: Always 0 (success)
*/
int main(void)
{
	char str[] = "Holberton";

	rev_string(str);
	printf("%s\n", str);
	return (0);
}
