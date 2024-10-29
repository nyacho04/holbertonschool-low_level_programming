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
	int i, a, y;

	for (i = 0; i <= 7; i++)
	{
		for (a = i + 1; a <= 8; a++)
		{
			for (y = a + 1; y <= 9; y++)
			{
				putchar(i + '0');
				putchar(a + '0');
				putchar(y + '0');
				if (i != 7 || a != 8 || y != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
