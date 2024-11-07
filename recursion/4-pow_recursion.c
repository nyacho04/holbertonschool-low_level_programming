#include <stdio.h>
#include "main.h"
/**
* _pow_recursion - This function prints a message.
*
* @x: The base number
*
* @y: The power to which the base is raised
*
*
* Return: 1 if c is uppercase, 0 otherwise.
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	if (y == 0)
	{
	return (1);
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
}
