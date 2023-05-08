#include "main.h"

/**
 * append_text_to_file - function to append to file
 * @filename: file name to be manipulated
 * @text_content: the content to be added
 * Return: 1 on success
 *	-1 on faliure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int counter = 0;
	int fp;
	int writen;


	if (!filename)
		return (-1);

	if (text_content)
	{
		for (; text_content[counter];)
			counter++;
	}

	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);

	writen = write(fp, text_content, counter);
	if (writen == -1)
		return (-1);
	close(fp);
	return (1);
}
