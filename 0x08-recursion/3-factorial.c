#include "main.h"

/**
 * factorial - function to return factorial
 * @n: the nmber to gets it fact
 * Return: int fact
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
