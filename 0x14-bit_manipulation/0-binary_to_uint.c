#include "main.h"

/***/
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int i = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b == '0')
			number += 0 * pow(2, i);
		else if (*b == '1')
			number += 1 * pow(2, i);
		i++;
	}
	return (number);
}

/***/
unsigned int pow(unsigned int num, int x)
{

	int i = 1;
	unsigned int temp = num;

	if (x == 0)
		return (1);
	if (x == 1)
		return (num);

	for (; i < x; i++)
		temp = temp * num;

	return (temp);
}

int _strlen(char *str)
{
    int length = 0;

    if (!(*str))
        return (0);

    while (*str != '\0')
    {
        length++;
        str++;
    }
    return (length);
}
