#include "main.h"

/**
 * _putchar - function to print to stdoputput
 * @C: char to be printed
 * Return: number of har writen to buffer
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
