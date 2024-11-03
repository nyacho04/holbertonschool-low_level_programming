#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* *cap_string - Entry point
*
* @str: pointer to an integer
*
* Description: This function prints a message.
*
* Return: Always 0 (success)
*/

char *cap_string(char *str)
{
	int n = 0;

	if (str[n] >= 'a' && str[n] <= 'z')
		str[n] -= 'a' - 'A';

	while (str[n] != '\0')
	{
		if (str[n] == ',' || str[n] == ';' || str[n] == '.' ||
			str[n] == '!' || str[n] == '?' || str[n] == '"' ||
			str[n] == '(' || str[n] == ')' || str[n] == '{' ||
			str[n] == '}' || str[n] == '\n' || str[n] == ' ' ||
			str[n] == '\t')
		{
			if (str[n + 1] >= 'a' && str[n + 1] <= 'z')
				str[n + 1] -= 'a' - 'A';
		}
		n++;
	}
	return (str);
}
