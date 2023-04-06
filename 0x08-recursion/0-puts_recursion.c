#include "main.h"

/**
 * _puts_recursioin - puts in rec
 * @s: string to put
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	_putchar(*s);
	_puts_recursion(s+1);
}
