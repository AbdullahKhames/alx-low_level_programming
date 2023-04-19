#include "function_pointers.h"

/**
 * print_name - function
 * @name: name
 * @f: function to print
 */

void print_name(char *name, void (*f)(char *))
{
	if (name  && f)
		f(name);
}
