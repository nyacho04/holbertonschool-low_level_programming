#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name- print the name
 * @name: name
 * @f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
