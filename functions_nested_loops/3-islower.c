#include "main.h"
/**
 * _islower - checks for lowercase character.
 * @c: the character to check (ASCII value or character)
 *
 * Description: This function checks whether the character @c
 *              is a lowercase letter ('a' to 'z').
 *
 * Return: 1 if @c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
		char is;
		int lower = 0;

	for (is = 'a'; is <= 'z'; is++)
	{
		if (is == c)
		{
			lower = 1;
			break;
		}
	}
	return (lower);
}

