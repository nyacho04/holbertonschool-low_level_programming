#include <unistd.h>
/** this function _putchar works like printf, but it prints a char */
int _putchar(char *s)
{
	return (write(1, &s, 1));
}