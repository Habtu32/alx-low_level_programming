#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** more headers goes there 
 * main - fro printing diffrent numbers
 * Return 0
 *
 */
int main(void)
{
	int n;
	int lD;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lD = n % 10;

	if (lD > 5)
	{
		printf("Last digit of  %d is  5 and is greater than 5\n", n);
	}
	else if (lD == 0)
	{
		printf("Last digit of  %d is  0 and is zero\n", n);
	}
	else if ((lD < 6) && (!0))
	{
		 printf("Last digit of  %d is and is less than 6 and not 0\n", n);
	}
	return (0);
}
