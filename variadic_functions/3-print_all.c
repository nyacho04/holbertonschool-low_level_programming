#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_all - it prints anything
 * @format: list of types arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list ap;
	char *aux;

	va_start(ap, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c, ", va_arg(ap, int));
				break;
			case 'i':
				printf("%d, ", va_arg(ap, int));
				break;
			case 'f':
				printf("%d, ", va_arg(ap, int));
				break;
			case 's':
				aux = va_arg(ap, char*);
				if (aux == NULL)
				{
				printf("(nil)");
				break;
				}
				printf("%s, ", aux);
				break;
		}
		i++;
	}
	va_end(ap);
	printf("\n)");

}
/**
 * main - prints anything
 *
 * Return: (void)
 */
int main(void)
{
	print_all("fceis", 'B',  3, "stSchool");
	return (0);
}
