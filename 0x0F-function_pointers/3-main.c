#include "3-calc.h"

/**
 * main - entry point
 * @argc: counter
 * @argv: values
 * Return: exit status
 */

int main(int argc, char **argv)
{

	int x, y;
	int (*fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	fun = get_op_func(argv[2]);

	if (!fun)
	{
		printf("Error\n");
		exit(99);
	}

	if (!y && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", fun(x, y));
	return (0);
}
