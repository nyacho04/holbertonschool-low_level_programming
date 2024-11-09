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
	int i;
	int n;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (n = 0; argv[i][n] != '\0'; n++)
		{
			if (argv[i][n] < '0' || argv[i][n] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
