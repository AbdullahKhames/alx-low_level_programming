#include "main.h"

/**
 * string_nconcat - string concat
 * @s1: firest
 * @s2: second
 * @n: n
 * Return: returns char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, length1, length2;
	char *cptr;

	if (s1 == NULL)
		length1 = 0;
	else
	{
		for (length1 = 0; s1[length1]; ++length1)
			;
	}

	if (s2 == NULL)
		length2 = 0;
	else
	{
		for (length2 = 0; s1[length2]; ++length2)
			;
	}

	if (length2 > n)
		length2 = n;
	cptr = malloc(sizeof(char) * (length1 + length2 +1));

	if (cptr == NULL)
		return (NULL);
	for (i = 0; i < length1; i++)
		cptr[i] = s1[i];
	for (j =0; j < length2; j++)
		cptr[j + length1] = s2[j];
	cptr[length1 + length2] = '\0';
	return (cptr);
}
