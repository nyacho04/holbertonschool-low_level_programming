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
* @...: A variable number of integers to be printed.
*
* Return: The sum of all the integers passed to the function.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int num;
	int flag = 0;

	if (separator == NULL)
	separator = "";

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
	num = va_arg(list, int);

	if (flag == 1)
	{
	printf("%s", separator);
	}
	printf("%d", num);
	flag = 1;
	}
	va_end(list);
}
