#include "search_algos.h"

/**
 * binary_search - binary searches array str
 * @array: array to be searched
 * @size: size of array
 * @value: vaalue to be searched for
 * Return: index  if found
*/
int binary_search(int *array, size_t size, int value)
{
	int low, high, mid;

	if (!array)
	{
		return (-1);
	}
	low = 0;
	high = size - 1;
	while (low <= high)
	{
		_putStr("Searching in array: ");
		printArr(array, size, low, high);
		_putStr("\n");

		mid = (low + high) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			high = mid - 1;
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
	}
	return (-1);
}

/**
 * printArr - function to print the array being searched
 * @array: array to be printed
 * @size: array original size
 * @start: start index
 * @end: end index
*/
void printArr(int *array, size_t size, int start, int end)
{
	size_t len = end - start + 1;
	int i, printed = 0;

	if (len > size)
	{
		return;
	}

	for (i = start; i <= end ; i++)
	{
		if (printed)
		{
			_putStr(", ");
		}
		if (_putStr(tostring(array[i])) > 0)
		{
			printed = 1;
		}
	}
}

/**
 * _putStr - print str
 * @str: to print
 * Return: number of bytes writen
*/
int _putStr(char *str)
{
	char *temp;
	int i = 0;

	if (!str)
	{
		return (0);
	}
	temp = str;
	while (*temp != '\0')
	{
		i++;
		temp++;
	}
	return (write(STDOUT_FILENO, str, i));
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
