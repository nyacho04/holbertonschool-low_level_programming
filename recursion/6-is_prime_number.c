#include <stdio.h>
#include "main.h"
/**
* is_prime_number - This function prints a message.
*
* @n: The number to be printed.
*
* Return: 1 if c is uppercase, 0 otherwise.
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n <= 3)
	{
		return (1);
	}
	if (n % 2 == 0 || n % 3 == 0)
	{
		return (1);
	}
	return (is_prime_number(n / 2));
}
