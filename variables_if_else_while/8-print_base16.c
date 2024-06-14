#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nya;
	char nya2;

	for (nya = '0'; nya <= '9'; nya++)
{
	putchar(nya);
}
	for (nya2 = 'a'; nya2 <= 'f'; nya2++)
{
	putchar(nya);
}
	putchar('\n');
	return (0);
}
