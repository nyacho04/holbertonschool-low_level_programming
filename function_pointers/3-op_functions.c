#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* op_add - return te sum of a and b.
*
* @a: first.
*
* @b: second.
*
* Return: sum a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - return the difference of a and b.
*
* @a: first.
*
* @b: second.
*
* Return: difference between a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - return the product of a and b.
*
* @a: first.
*
* @b: second.
*
* Return: a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - returns the result of dividing a by b.
*
* @a: first.
*
* @b: second.
*
* Return:	division
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n")
	exit(100);
	}
	return (a / b);
}

/**
* op_mod - returns the remainder of a divided by b.
*
* @a: first.
*
* @b: second.
*
* Return: a divided by b.
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n")
	exit(100);
	}
	return (a % b);
}
