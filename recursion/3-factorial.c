#include <stdio.h>
#include "main.h"
/**
* factorial - This function prints a message.
*
* @n: The string to be printed.
*
* Return: 1 if c is uppercase, 0 otherwise.
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
