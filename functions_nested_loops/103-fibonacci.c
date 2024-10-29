#include <stdio.h>
#include "main.h"
/**
* main - This function prints a message.
*
* Return: Always 0 (success)
*/
int main(void)
{
	int a = 1;
	int b = 2;
	int suma = 0;
	int sig;

	while (b <= 4000000)
	{
		if (b % 2 == 0)
			suma += b;

		sig = a + b;
		a = b;
		b = sig;
	}

	printf("%d\n", suma);

	return (0);
}
