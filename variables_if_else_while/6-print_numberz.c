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
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar("%d", num);
	}
	putchar("\n");

	return (0);
}
