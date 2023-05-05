#include "main.h"

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) *8)
		return (-1);
	return (!!(*n |= 1l << index));
}
