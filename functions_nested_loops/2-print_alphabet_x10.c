#include <stdio.h>
#include "main.h"
/**
* print_alphabet - This function prints a message.
*
* Return: Always 0 (success)
*/
void print_alphabet_x10(void)
{
int i;
char letra;

    for (i = 0; i < 10; i++)

    for (letra = 'a'; letra <= 'z'; letra++)
    {
    _putchar(letra);
    }
    _putchar('\n');
}
