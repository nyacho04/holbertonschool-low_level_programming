#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
* main - Entry point, performs simple operations.
*
* @argc: Number of arguments.
*
* @argv: Array of arguments.
*
* Return: 0 on success.
*/

int main(int argc, char *argv[])
{
int num1;
int num2;
int resultado;

int (*operacion)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operacion = get_op_func(argv[2]);

	if (!operacion)
	{
		printf("Error\n");
		exit(99);
	}

	resultado = operacion(num1, num2);
	printf("%d\n", resultado);

	return (0);
}
