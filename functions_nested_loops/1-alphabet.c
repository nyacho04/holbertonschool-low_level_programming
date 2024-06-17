#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line.
 *
 * Description:
 * This function prints all lowercase letters from 'a' to 'z'.
 */
void print_alphabet(void)
{
	char nya;

	for (nya = 'a'; nya <= 'z'; nya++)
{
	_putchar(nya);
}
	_putchar('\n');

}
