#include <stdio.h>
#include "main.h"
/**
* _abs - This function prints a message.
*
* @n: The character to be checked
*
* Return: Always 0 (success)
*/
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
