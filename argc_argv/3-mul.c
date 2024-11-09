#include <stdio.h>
#include <stdlib.h>
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

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}
