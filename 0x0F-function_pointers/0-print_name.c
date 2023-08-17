#include "function_pointers.h"
/**
* print_name - prints a name to stdout
* @name: name to be printed
* @f: fn to print name
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);
}
