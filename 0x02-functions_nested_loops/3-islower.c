#include "main.h"

/**
 * _islower - function to check if character is loser case
 *
 * @c : the parameter to be checked is loswer
 *
 *
 * Return : returns 1 if 'c' is lowercase otherwise always  0 (success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}