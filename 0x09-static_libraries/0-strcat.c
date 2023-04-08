#include "main.h"

/**
 * _strcat - a function to concat
 * @dest: the string they concat to
 * @src: the string they concat
 * Return: the new string after concat
 */
char *_strcat(char *dest, char *src)
{
int a = -1, i;
for (i = 0; dest[i] != '\0'; i++)
;

do {
	a++;
	dest[i] = src[a];
	i++;
} while (src[a] != '\0');

return (dest);
}
