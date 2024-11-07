#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size);

int main (void)
{
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
};
print_diagsums((int*)matrix, 3);
return (0);
}