#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
/**
* print_strings- This function prints a message.
*
* @separator: This is a string that will be printed between numbers.
*
* @n: The number of integers passed to the function.
*
* Return: The sum of all the integers passed to the function.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lista;
	unsigned int i;
	char *string;

	va_start(lista, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(lista, char *);

		if (string == NULL)
		string = "(nil)";

		if (i != 0)

		printf("%s", separator);
		printf("%s", string);
	}

		va_end(lista);
		printf("\n");
}
