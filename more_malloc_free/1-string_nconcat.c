#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string
 * @s2: string
 * @n: number of bytes from s2 to s1
 *
 * Return: resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *i;

	unsigned int a = 0;
	unsigned int b = 0;
	unsigned int nya = 0;
	unsigned int nya2 = 0;

	while (s1 && s1[nya])
		nya++;
	while (s2 && s2[nya2])
		nya2++;
	if (n < nya2)
		i = malloc(sizeof(char) * (nya + n + 1));
	else
		i = malloc(sizeof(char) * (nya + nya2 + 1));
	if (!i)
	return (NULL);

	while (a < nya)
	{
		i[a] = s1[a];
		a++;
	}
	while (n < nya2 && a < (nya + n))
		i[a++] = s2[b++];

	while (n >= nya2 && a < (nya + nya2))
		i[a++] = s2[b++];
	i[a] = '\0';

	return (i);
}
