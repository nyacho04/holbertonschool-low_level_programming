#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program for operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    int nya1, nya2, resultado;
    char a;
    int (*func)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    nya1 = atoi(argv[1]);
    nya2 = atoi(argv[3]);

    func = get_op_func(argv[2]);

    if (!func)
    {
        printf("Error\n");
        exit(99);
    }

    a = *argv[2];

    if ((a == '/' || a == '%') && nya2 == 0)
    {
        printf("Error\n");
        exit(100);
    }

    resultado = func(nya1, nya2);

    printf("%d\n", resultado);

    return (0);
}
