#include <stdio.h>
/**
* main - Entry point
*
* Description: This function prints a message.
*
* Return: Always 0 (success)
*/

int main(void)
{
	char letra;

	for  (letra = 'a'; letra <= 'z'; letra++)
	{
		putchar(letra);
	}
	for  (letra = 'A'; letra <= 'Z'; letra++)
	{
		putchar(letra);
	}

	putchar('\n');

	return (0);
	}
