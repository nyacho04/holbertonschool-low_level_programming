#include "variadic_functions.h"
/**
 * print_numbers - prints the given numbers
 * @separator: string to be printed
 * @n: number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int a;
va_list lista;
va_start(lista, n);

	for (a = 0; a < n; a++)
	{
		if (!separator)
			printf("%d", va_arg(lista, int));

		else if (separator && a == 0)
			printf("%d", va_arg(lista, int));

		else
			printf("%s%d", separator, va_arg(lista, int));
	}

	va_end(lista);

	printf("\n");
}
