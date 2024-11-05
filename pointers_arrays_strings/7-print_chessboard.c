#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* print_chessboard - Entry point
*
* @a: 2D array
*
* Description: This function prints a message.
*
* Return: Always 0 (success)
*/

void print_chessboard(char (*a)[8])
{
	int i;

	int b;

	for (i = 0; i < 8; i++)
	{
		for (b = 0; b < 8; b++)
		{
			printf("%c", a[i][b]);
		}
		printf("\n");
	}
}
