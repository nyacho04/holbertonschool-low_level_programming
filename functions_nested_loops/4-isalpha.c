#include <stdio.h>
#include "main.h"
/**
* _isalpha- This function prints a message.
*
* @c: The character to be checked
*
* Return: Always 0 (success)
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	return (0);
}
