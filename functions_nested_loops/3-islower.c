#include <stdio.h>
#include "main.h"
/**
* _islower- This function prints a message.
*
*  @c: The character to be checked.
*
* Return: Always 0 (success)
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
