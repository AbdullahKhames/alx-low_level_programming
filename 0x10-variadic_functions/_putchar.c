#include "variadic_functions.h"
#include <unistd.h>

/**
 * _putchar - function to print 
 * @c: prints 
 * Return: returns int
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
