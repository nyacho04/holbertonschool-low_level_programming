#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{	char tuki;
	char e, q;

	e = 'e';
	q = 'q';

	for (tuki = 'a'; tuki <= 'z'; tuki++)
{
	if (tuki != e && tuki != q)
	putchar(tuki);
}
	putchar('\n');

	return (0);
}
