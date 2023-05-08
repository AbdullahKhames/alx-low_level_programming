#include "main.h"

/**
 * read_textfile - function to read text file
 * @filename: the full path
 * @letters: the buffer to be read
 * Return: the number of bytes red
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t counter = 0;
	FILE *fp;
	char *str;
	char *buffer;

	if (!filename)
		return (0);

	if (letters <= 0)
	       return (0);
	
	fp = fopen(filename, "r");

	if (!fp)
		return (0);

	buffer = fgets(str, letters, fp);

	if (!buffer)
		return (0);

	while (buffer)
	{
		_putchar(*buffer);
		counter++;
		buffer++;
	}
	return counter;

}
