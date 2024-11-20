
/**
 * print_name - function
 *
 * @name:- name to be printed
 *
 * @f: prints the name
 *
 * Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
