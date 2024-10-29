#include <stdio.h>
/**
* main - Entry point
*
* Description: This function prints a message.
*
* Return: Always 0 (success)
*/
int main(void)
{
	int i, g;

	for (i = 0; i <= 9; i++)
	{
		for (g = i + 1; g <= 9; g++)
		{
			putchar(i + '0');
			putchar(g + '0');

			if (i != 8 || g != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
