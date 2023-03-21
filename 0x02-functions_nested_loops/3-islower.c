#include "main.h"

/**
 * _islower - function to check if character is loser case
 *
 * @c : the parameter to be checked is loswer
 *
 * Description : 'new function to check alphabet'
 *
 * Return : returns 0 if lower case returns  1 if capital case
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
