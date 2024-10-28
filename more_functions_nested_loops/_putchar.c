#include <unistd.h>
/** this function _putchar works like printf, but it prints a char */
int _putchar(char c)
{
	return (write(1, &c, 1));
}