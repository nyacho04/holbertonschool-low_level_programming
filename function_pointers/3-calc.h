#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct op - structure
 *
 * @op: operator
 *
 * @i: associated function
*/

typedef struct op
{
	char *op;
	int (*i)(int a, int n);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
