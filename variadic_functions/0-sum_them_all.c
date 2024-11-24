#include <stdarg.h>
#include "variadic_functions.h"
/**
* sum_them_all - This function prints a message.
*
* @n: The number of integers passed to the function.
*
* Return: The sum of all the integers passed to the function.
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int suma = 0;
	va_list args;

	if (n == 0)
	return (0);

va_start(args, n);

for (i = 0; i < n; i++)
suma += va_arg(args, int);

va_end(args);

return (suma);

}
