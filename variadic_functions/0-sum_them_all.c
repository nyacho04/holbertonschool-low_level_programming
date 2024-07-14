#include "variadic_functions.h"
/**
 * sum_them_all - it calculates the sum of all parameters
 * @n: number of arguments
 *
 * Return: the resulting
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	int suma = 0;
	va_list list;

	va_start(list, n);

	for (a = 0; a < n; a++)

	suma += va_arg(list, int);

	va_end(list);

	return (suma);
}
