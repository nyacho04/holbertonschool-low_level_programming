#include <stdio.h>
#include "main.h"
/**
* main - Entry point
*
* Description: This function prints a message.
*
* Return: Always 0 (success)
*/
int main(void)
{
	char str[] = "Holberton";

	rev_string(str);
	printf("%s\n", str);
	return (0);
}
