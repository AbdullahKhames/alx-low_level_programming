#include "main.h"

/**
 * flip_bits - flips bits
 * @n: n
 * @m: m
 * Return: number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int res = 0;
	unsigned long int value = n ^ m;

	while (value)
	{
		if (value & 1ul)
			res++;
		value >>= 1;
	}
	return (res);
}
