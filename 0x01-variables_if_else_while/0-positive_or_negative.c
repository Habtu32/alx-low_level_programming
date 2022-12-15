#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - This program is designed for runnig Number
 * Return:0
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is posetive number\n", n);
	}
	else if (n < 0)
	{
		printf("%d is zero number\n", n);
	}
	else
	{
		printf("%d is negative number\n", n);
	}
	return (0);
}
