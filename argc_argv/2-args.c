#include "main.h"
#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int nya;

	for (nya = 0; nya < argc; nya++)
	{
		printf("%s\n", argv[nya]);
	}
	return (0);
}
