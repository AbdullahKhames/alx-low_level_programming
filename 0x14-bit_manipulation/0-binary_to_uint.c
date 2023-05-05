#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	unsigned int number;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		number = number * 2 + (*b++ - '0');
	}
	return (number);
}
