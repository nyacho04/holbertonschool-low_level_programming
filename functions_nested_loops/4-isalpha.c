/**
 * _isalpha - checks for alphabetic character.
 * @c: the character to check (ASCII value or character)
 *
 * Description: This function checks whether the character @c
 *              is an alphabetic letter (either lowercase or uppercase).
 *
 * Return: 1 if @c is an alphabetic letter, 0 otherwise.
 */
#include "main.h"
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
