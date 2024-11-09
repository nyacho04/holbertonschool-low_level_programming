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
	int cent = 0;
	int coin = 0;
	int valor[] = {25, 10, 5, 2, 1};
	int i;

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}
	cent = atoi(argv[1]);

	if (cent < 0)
	{
		printf("0\n");

		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		coin += cent / valor[i];

		cent %= valor[i];
	}

	printf("%d\n", coin);

	return (0);
}
