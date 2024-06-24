#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @str: string to modify
 *
 * Return: the resulting string
 */
char *string_toupper(char *str)
{
	int nya;

	for (nya = 0; str[nya] != '\0'; nya++)
	{
		if (str[nya] >= 'a' && str[nya] <= 'z')
			str[nya] = str[nya] - 32;
	}
	return (str);
}
