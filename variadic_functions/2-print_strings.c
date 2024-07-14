#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: amount of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *str;

	va_list lista;

	va_start(lista, n);

	for (a = 0; a < n; a++)
	{
	str = va_arg(lista, char *);
	if (!str)
		str = "(nil)";
	if (!separator)
	printf("%s", str);
	else if (separator && a == 0)
		printf("%s", str);
	else
		printf("%s%s", separator, str);
	}

	printf("\n");

	va_end(lista);
}
