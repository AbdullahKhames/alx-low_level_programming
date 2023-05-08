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
	FILE *fp;
	int writen;

	if (!filename)
		return (-1);

	if (text_content)
	{
		for (; text_content[counter];)
			counter++;
	}

	fp = fopen(filename, "a+");
	if (!fp)
		return (-1);

	fprintf(fp, text_content);
	fclose(fp);
	return (1);
}
