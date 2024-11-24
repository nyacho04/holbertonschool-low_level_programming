#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_numbers - This function prints a message.
*
* @separator: This is a string that will be printed between numbers.
*
* @n: The number of integers passed to the function.
*
* Return: The sum of all the integers passed to the function.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lista;
	unsigned int i;

	if (separator == NULL)
		separator = "";

	va_start(lista, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(lista, int));

		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(lista);

	printf("\n");
}
