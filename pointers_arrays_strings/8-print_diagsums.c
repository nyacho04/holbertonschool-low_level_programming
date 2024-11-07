#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* print_diagsums - Entry point
*
* @a: array of integers
*
* @size: size of the array
*
* Description: this funciton prints a message
*
* Return: void
*/

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - i - 1)];
	}
	printf("%d\n", sum1);
	printf("%d\n", sum2);
}
