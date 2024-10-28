#include <stdio.h>
#include "main.h"
/**
* print_most_numbers - This function prints a message.
*
* Return: Always 0 (Success)
*/
void print_most_numbers(void)
{
char numbr;

for (numbr = '0'; numbr <= '9'; numbr++)
{
if (numbr != '2' && numbr != '4')
{
_putchar(numbr);
}
}
_putchar('\n');
}
