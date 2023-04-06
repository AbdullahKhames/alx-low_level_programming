#include "main.h"

/**
 * check_number - checks for square root
 * @x: first arg
 * @y: second arg
 * Return: returns the sqrt
 */
int check_number(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	else
		return (check_numnber(x + 1, y));
}

/**
 * _sqrt_recursion - get sqrt of rqm
 * @n: rqm to get sqrt
 * Return: returns sqrt
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check_number(1, n));
}
