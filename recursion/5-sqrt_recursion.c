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
	return (_sqrt_help(n, 1));
}
/**
* _sqrt_help - This function prints a message.
*
* @n: The number to be printed.
*
* @nya: The number to be printed.
*
* Return: 1 if c is uppercase, 0 otherwise.
*/

int _sqrt_help(int n, int nya)
{
	if (nya * nya == n)
	{
		return (nya);
	}
	else if (nya * nya > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_help(n, nya + 1));
	}
}
