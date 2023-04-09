#include <stdio.h>
#include <stdlib.h>

/**
 * main - prog
 * @argc: arg
 * @argv: arg
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i, cents = 0, money;
	int centsArr[] = {25, 10, 5, 2, 1};

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		if (money >= centsArr[i])
		{
			cents += money / centsArr[i];
			money = money % centsArr[i];
			if (money % centsArr[i] == 0)
				break;
		}
	}
	printf("%d\n", cents);
	return (0);


}
