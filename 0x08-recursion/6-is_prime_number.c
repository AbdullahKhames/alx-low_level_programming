#include "main.h"


/**
 * primechecker - checks to see if number is prime
 * @x:int
 * @y:int
 * Return:int
 */
int primechecker(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (primechecker(x + 1, y));
}


/**
 * is_prime_number - checks prime
 * @n: number to check
 * Return: if true 1 if false 0
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (primechecker(2, n));

}
