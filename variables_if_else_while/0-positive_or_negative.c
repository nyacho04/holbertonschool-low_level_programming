#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program
 *
 * Description: This function ssign a random number to the variable n
 *
 * Return: Always returns 0 (success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("%d ", n);

if (n > 0)
{
   printf("%d is positive\n");
}
else if (n == 0)
{
 printf("%d is zero\n");
}
else
{
printf("%d is negative\n");
}

return (0);
}
