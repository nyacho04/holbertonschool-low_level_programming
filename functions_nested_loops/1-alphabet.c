#include <stdio.h>
#include "main.h"
/**
* print_alphabet - This function prints a message.
*
* Return: Always 0 (success)
*/
void print_alphabet(void)
{
	char letra;

	for (letra = 'a'; letra <= 'z'; letra++)
	{
		_putchar(letra);
	}
		_putchar('\n');
}
