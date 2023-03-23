#include <unistd.h>
#include "main.h"

/**
 *_putchar - writes character to standart output
 *
 *@c : the character to print
 *
 *description : prints the character
 *
 *Return : on success 1
 *	   on error -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
