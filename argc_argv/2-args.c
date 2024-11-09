#include <stdio.h>
/**
* main - This function prints a message.
*
* @argc: The number of arguments passed to the program.
*
* @argv: An array of strings containing the arguments passed to the program.
*
* Return: 1 if c is uppercase, 0 otherwise.
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
