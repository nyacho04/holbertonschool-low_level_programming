#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * *_strdup - copies the string as parameter
 * @str: string
 * Return: (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *nya;
	unsigned int j, tuki;

	j = 0;

	tuki = 0;

	if (str == NULL)

	return (NULL);

	while (str[tuki])

	tuki++;

	nya = malloc(sizeof(char) * (tuki + 1));

	if (nya == NULL)

	return (NULL);

	while ((nya[j] = str[j]) != '\0')
	j++;

	return (nya);
}
