#include "main.h"

/**
 * create_file - function to create and write to  a file
 * @filename: pointer to char filename
 * @text_content: pointer to char content
 * Return: 1 on success
 *	-1 on faliure
 */

int create_file(const char *filename, char *text_content)
{

	int fp;
	int writen;
	int counter = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		for (; text_content[counter]; counter++)
			;
	}

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fp == -1)
		return (-1);

	writen = write(fp, text_content, counter);
	if (writen == -1)
		return (-1);

	close(fp);

	return (1);

}
