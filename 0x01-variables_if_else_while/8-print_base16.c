#include <stdio.h>
/**
 *main - main function to print alpahbetic character
 *
 *Return:0
 */
int main(void)
{
	char c = 'a';
	int b = 0;

	for (; b <= 10; b++)
		putchar((b % 10) + '0');

	for (; c <= 'f'; c++)
		putchar(c);

	putchar('\n');
	return (0);

}
