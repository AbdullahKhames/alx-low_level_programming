#include "main.h"

/**
 * _islower - function to check if character is loser case
 *
 * @c : the parameter to be checked is loswer
 *
 * Description : new function to check alphabet case
 *
 * Return : returns 1 if lower case returns  
 	    otherwise always  0 (success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
