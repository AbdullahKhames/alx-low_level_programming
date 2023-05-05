#include "main.h"


/**
 * powr - function to get the power of a number
 * @num: the first arg
 * @x: the power of
 * Return: the power of a number
 */
unsigned int powr(unsigned int num, int x)
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

/**
 * _strlen - function
 * @str: string
 * Return: length of str
 */
int _strlen(const char *str)
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
/**
 * binary_to_uint - funstion
 * @b: str
 * Return: number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int i;
	int n = 0;
	int x;

	if (!b)
		return (0);

	x = _strlen(b);
	for (i = x - 1; i > 0; i--, n++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '0')
			number += 0;
		else if (b[i] == '1')
			number += 1 * powr(2, n);

	}
	return (number);
}
