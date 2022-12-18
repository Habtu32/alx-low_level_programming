#include<stdio.h>
/**
 * main - to print combination of numers
 *
 * Return:0
 *
 */
int main(void)
{
	int b = 0;

	for (; b < 10; b++)
	{
		putchar((b % 10) + '0');
		if (b < 10)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

return (0);
}
