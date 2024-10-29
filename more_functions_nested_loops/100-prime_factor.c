#include <stdio.h>
/**
* main - This function prints a message.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	long num = 612852475143;
	long factor = 2;
	long big = 0;

	while (num > 1)
	{
		if (num % factor == 0)
		{
			big = factor;
			num /= factor;
		}
		else
		{
			factor++;
		}
	}

	printf("%ld\n", big);
	return (0);
}
