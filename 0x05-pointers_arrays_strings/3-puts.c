#include "main.h"

/**
 * _puts - function to print the string to stdoutput
 * @str: the string to be printed
 * Description: function to print to standard output a given string
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
