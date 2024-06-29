#include "main.h"
#include <stdio.h>
/**
 * main - prints the name of the program
 * @argv: array of arguments
 * @argc: array of numbers
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
{
	printf("%s\n", argv[0]);
}
	return (0);
}
