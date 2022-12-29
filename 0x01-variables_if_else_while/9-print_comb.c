#include<stdio.h>
/**
 *main - main print number combinations
 *
 * Return:0
 */
int main(void)
{
	char num = '0';
	char comm = ',', space = ' ';

	while (num <= '9')
	{
		putchar(num);
		if (num != '9')
		{
			putchar(comm);
			putchar(space);
		}
		num++;
	}
	putchar('\n');

return (0);
}
