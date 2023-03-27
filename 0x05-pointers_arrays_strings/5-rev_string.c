#include "main.h"

/**
 * rev_string - reverses a string
 * @s: char to check
 */

void rev_string(char *s)
{
	int len = 0, i, c;
	char temp;

	while (s[len] != '\0')
		len++;

	c = len - 1;
	for (i = 0; c >= 0 && i < c; c--, i++)
	{
		temp = s[i];
		s[i] = s[c];
		s[c] = temp;
	}
}
