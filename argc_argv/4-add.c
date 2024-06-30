#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	char *ptr;

	for (i = 1; i < argc; i++)
{
	for (ptr = argv[i]; *ptr; ptr++)
{
		if (!isdigit(*ptr))
{
		printf("Error\n");
		return (1);
}
}
		sum += atoi(argv[1]);
}
		printf("%d\n", sum);
		return (0);
}
