#include<stdio.h>
/**
 *main - main to print lowercase in reverse order
 *
 * Return:0
 */
int main(void)
{
	char i = 'z';

	while (i <= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
return (0);
}
