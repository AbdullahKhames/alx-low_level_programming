#include "main.h"

/**
 * print_rev - function prints string in reverse
 * @s: the string to be printed
 */
void print_rev(char *s)
{
	int len;
	int i;

	len =  _strlen(s);

	for (i = len ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
