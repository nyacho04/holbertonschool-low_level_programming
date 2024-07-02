#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 *
 * Return: pointer to the new string (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *i;
	unsigned int nya = 0, ayn = 0, tuki = 0, ikut = 0;

	while (s1 && s1[tuki])
		tuki++;

	while (s2 && s2[ikut])
		ikut++;

	i = malloc(sizeof(char) * (tuki + ikut + 1));

	if (i == NULL)

	return (NULL);

	if (s1)
{
	while (nya < tuki)
{
	i[nya] = s1[nya];
	nya++;
}
}

	if (s2)
{
	while (nya < (tuki + ikut))
{
	i[nya] = s2[ayn];
	nya++;
	ayn++;
}
}
	i[nya] = '\0';

	return (i);
}
