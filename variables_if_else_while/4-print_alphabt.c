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

for (letra = 'a'; letra <= 'z'; letra++)
{
	if (letra != 'q' && letra != 'e')
	{
	putchar(letra);
	}
}
putchar('\n');

	return (0);
}
