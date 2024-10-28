#include <stdio.h>
#include "main.h"
/**
* main - This function prints a message.
*
* Return: Always 0 (success)
*/
int main(void)
{
	unsigned long int a = 1, b = 2, next;

	int count;

	printf("%lu, %lu", a, b);

	for (count = 2; count < 50; count++)
	{
		next = a + b;
		printf(", %lu", next);
		a = b;
		b = next;
	}
	printf("\n");
	return (0);
}
