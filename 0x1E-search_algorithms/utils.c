#include "search_algos.h"

/**
 * _strLen - print str
 * @str: to print
 * Return: number of bytes writen
*/
int _strLen(char *str)
{
	int i = 0;

	if (!str)
	{
		return (0);
	}

	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}
/**
 * _putStr - print str
 * @str: to print
 * Return: number of bytes writen
*/
int _putStr(char *str)
{
	int printed;

	if (!str)
	{
		return (0);
	}
	printed = write(STDOUT_FILENO, str, _strLen(str));
	return (printed);
}

/**
 * caseZero - print str
 * Return: string rep
*/
char *caseZero()
{
	char *str;

	str = (char *)malloc(2);
	if (str == NULL)
	{
		exit(EXIT_FAILURE);
	}
	str[0] = '0';
	str[1] = '\0';
	return (str);
}
/**
 * tostring - print str
 * @num: to print
 * Return: string rep
*/
char *tostring(int num)
{
	char *str;
	int i = 0, rem, len = 0, n, negative = 0;

	if (num == 0)
	{
		return (caseZero());
	}

	if (num < 0)
	{
		negative = 1;
		num = -num;
	}
	n = num;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	if (negative == 1)
	{
		len++;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
	{
		exit(EXIT_FAILURE);
	}
	for (; i < len; i++)
	{
		rem = num % 10;
		num = num / 10;
		str[len - (i + 1)] = rem + '0';
	}
	if (negative == 1)
	{
		str[0] = '-';
	}
	str[len] = '\0';
	return (str);
}
