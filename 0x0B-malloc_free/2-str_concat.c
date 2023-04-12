#include "main.h"

/**
 * _strlen - function return string length
 * @s: striung to get its length
 * Return: returns size of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}

/**
 * str_concat - function to concatenate string
 * @s1: first string
 * @s2: second string
 * Return: return concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int length1, length2, maxLength;
	int index;
	char *temp;

	if (s1 == NULL)
		s1 = "\0";

	if (s2 == NULL)
		s2 = "\0";
	length1 = _strlen(s1);
	length2 = _strlen(s2);
	maxLength = length1 + length2;
	temp = malloc(maxLength * sizeof(char) + 1);

	if (temp == 0)
		return (0);

	for (index = 0; index < maxLength; index++)
	{
		if (index < length1)
			temp[index] = s1[index];
		else
			temp[index] = s2[index - length1];
	}
	temp[index] = '\0';
	return (temp);
}
