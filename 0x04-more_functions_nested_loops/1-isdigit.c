#include "main.h"

/**
 * _isdigit - function to check if given int is digit
 * @c: int to be checked
 * Description: checks if given in is digit or not
 * Return: returns 1 if c is digit returns 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
