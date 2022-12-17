#include <stdio.h>
/**
 *main - main function to print alpahbetic character
 *
 *Return:0
 */
int main(void)
{
	char c = 'a';
	char b = 'A';

	for (; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (; b <= 'Z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);

}
