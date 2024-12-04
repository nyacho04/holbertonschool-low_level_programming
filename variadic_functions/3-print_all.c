#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
/**
* print_all- prints all arguments
*
* @format: format of the string
*
* Return: Void.
*/
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char separator = 0;

	va_start(args, format);

	while (format && format[i])
	{
		if (separator)
			printf(", ");

		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			break;
		default:
			i++;
			continue;
		}
		separator = 1;
		i++;
	}
	va_end(args);
	printf("\n");
}
