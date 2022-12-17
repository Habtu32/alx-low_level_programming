#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - This program is designed for runnig Number
 * Return:0
 *
 */
int mai(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}return (0);
}
