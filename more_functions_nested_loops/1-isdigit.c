#include <stdio.h>
#include "main.h"
/**
* _isdigit - This function prints a message.
*
* @c: The character to be checked.
*
* Return: 1 if c is uppercase, 0 otherwise.
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
