#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{	char hola;
	char HOLA;

	for (hola = 'a'; hola <= 'z'; hola++)
{
	putchar(hola);
}
	for (HOLA = 'A'; HOLA <= 'z'; HOLA++)
{
	putchar(HOLA);
}
	putchar('\n');

	return (0);
}
