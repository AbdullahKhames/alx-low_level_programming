#include "main.h"

/**
 * main - entry point
 *
 * Description : a program that print putchar
 *
 * Return : Always 0 (succecful)
 */

int main(void)
{
	char text[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(text[i]);
	_putchar('\n');
	return (0);
}
