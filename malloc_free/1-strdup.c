#include <stdio.h>
#include <stdlib.h>
/**
* *_strdup - This function prints a message.
*
* @str: The string to be duplicated.
*
* Return: A pointer to the array.
*/

char *_strdup(char *str)
{
	char *strdup;
	unsigned int i;
	unsigned int nya = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[nya] != '\0')
		nya++;

	strdup = malloc((nya + 1) * sizeof(char));

	if (strdup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= nya; i++)
	{
		strdup[i] = str[i];
	}

	return (strdup);
}
