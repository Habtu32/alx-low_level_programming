#include<stdio.h>
/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long hab1 = 0, hab2 = 1, habsum;
	float habtotsum;

	while (1)
	{
		habsum = hab1 + hab2;
		if (habsum > 4000000)
			break;

		if ((habsum % 2) == 0)
			habtotsum += habsum;

		hab1 = hab2;
		hab2 = habsum;
	}
	printf("%.0f\n", habtotsum);

	return (0);
}
