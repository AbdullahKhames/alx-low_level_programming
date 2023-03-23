#include "main.h"
#include <stdio.h>

/**
 * _isuppereck - function that check is upper
 * @c: the character to check
 * Description: get a charcter and checks if it is upper or lower
 * Return: 1 if c is uppercase , 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 56 && c <= 90)
		return (1);
	else
		return (0);
}
