#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* *_atoi - Entry point
*
* @s: string to convert
*
* Description: This function prints a message.
*
* Return: Always 0 (success)
*/

int _atoi(char *s)
{
	int resultado = 0;
	int nya = 1;

	for (; *s && (*s < '0' && *s > '9'); s++)
	{
		if (*s == '-')
		nya = -nya;
	}
	for (; *s >= '0' && *s <= '9'; s++)
	{
		resultado = resultado * 10 + (*s - '0');
	}
	return (resultado * nya);
}
