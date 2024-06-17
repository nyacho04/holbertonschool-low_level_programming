#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nya;

	for (nya = '0'; nya <= '9'; nya++)
{
	putchar(nya);

	if (nya != '9')
{
	putchar(',');
	putchar(' ');
}
}
	putchar('\n');

	return (0);
}

