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
	ssize_t fp;
	ssize_t red;
	char *buffer;

	if (!filename)
		return (0);

	if (letters <= 0)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);

	red = read(fp, buffer, letters);



	free(buffer);
	close(fp);

	return (counter);

}
