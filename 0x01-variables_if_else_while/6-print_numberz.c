#include <stdio.h>
/**
 *main - main function to print alpahbetic character
 *
 *Return:0
 */
int main(void)
{
	int c = 0;

	for (; c < 10; c++)
	{
		putchar((c % 10) + '0');
	}
	putchar('\n');

	return (0);

}
