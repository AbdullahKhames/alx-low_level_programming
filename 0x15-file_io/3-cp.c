
#include "main.h"

/**
 * buff_writer - checks for buff to write in
 * @value: value
 * @file: file
 * @fp_from: file
 * @fp_to: file
 */

void buff_writer(int value, char *file, int fp_from, int fp_to)
{
	if (value == -1)
	{


		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file);
		if (fp_from != -1)
			close(fp_from);

		if (fp_to != -1)
			close(fp_to);
		exit(99);
	}

}

/**
 * buff_reader - checks for buff to write in
 * @value: value
 * @file: file
 * @fp_from: file
 * @fp_to: file
 */
void buff_reader(int value, char *file, int fp_from, int fp_to)
{
	if (value == -1)
	{


		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (fp_from != -1)
			close(fp_from);

		if (fp_to != -1)
			close(fp_to);
		exit(98);
	}

}
/**
 * argc_Checker - checks for correct args sent
 * @argc: argc
 */
void argc_Checker(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * file_closer - checks to close file
 * @value: value
 * @fp: fp
 */

void file_closer(int value, int fp)
{
	if (value == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp);
		exit(100);
	}
}


/**
 * main - mian
 * @argc: argc
 * @argv: argv
 * Return: 1
 */
int main(int argc, char **argv)
{

	int fp_from;
	int fp_to;
	int close_to;
	int close_from;
	ssize_t counter1;
	ssize_t counter2;
	char buff[1024];
	mode_t file_perm;

	argc_Checker(argc);
	fp_from = open(argv[1], O_RDONLY);
	buff_reader(fp_from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fp_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);

	buff_writer(fp_to, argv[2], fp_from, -1);
	counter1 = 1024;

	while (counter1 == 1024)
	{
		counter1 = read(fp_from, buff, 1024);
		buff_reader(counter1, argv[1], fp_from, fp_to);
		counter2 = write(fp_to, buff, counter1);
		if (counter2 != counter1)
			counter2 = -1;
		buff_writer(counter2, argv[2], fp_from, fp_to);
	}
	close_to = close(fp_to);
	close_from = close(fp_from);

	file_closer(close_to, fp_to);
	file_closer(close_from, fp_from);
	return (0);
}
