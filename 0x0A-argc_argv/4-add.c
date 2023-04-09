#include <stdio.h>
#include <stdlib.h>


/**
 * is_number - function
 * @n: the arg
 * Return: true if number false if not
 */

int is_number(const char *n)
{
	int x;
	char *cptr;

	x = strtol(n, &cptr, 10);
	if (*cptr != '\0')
	{
		return (x);
	}
	return (1);
}

/**
 * main - prog
 * @argc: argc
 * @argv: argv
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int x, i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}


	for (i = 1; i < argc; i++)
	{
		if (!is_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		x = atoi(argv[i]);
		sum += x;
	}

	printf("%d\n", sum);
	return (0);

}
