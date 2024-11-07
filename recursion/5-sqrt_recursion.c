#include <stdio.h>
#include "main.h"
/**
* _sqrt_recursion - This function prints a message.
*
* @n: The number to be printed.
*
* Return: 1 if c is uppercase, 0 otherwise.
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		printf("Error\n");
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_recursion(n - 1) + 1);
	}
}