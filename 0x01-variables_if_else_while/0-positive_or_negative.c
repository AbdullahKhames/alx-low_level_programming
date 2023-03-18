#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - main function
 *Description :enter a random number
 * and check its value is over 0 print positive
 * if less than zero prints negative
 * if zero prints zero
 * Return:0
 */

int main(void)
{
	int n;

	char positive[] = "is positive";

	char zero[] = "is zero";

	char negative[] = "is negative";

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */

	if (n > 0)
		printf("%d %s\n", n, positive);
	else if (n == 0)
		printf("%d %s\n", n, zero);
	else
		printf("%d %s\n", n, negative);
	return (0);
}
