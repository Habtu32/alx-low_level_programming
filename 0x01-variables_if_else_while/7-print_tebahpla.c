#include <stdio.h>
/**
 *main - main function to print alpahbetic character
 *
 *Return:0
 */
int main(void)
{
	char c = 'z';

	for (; c >= 'a'; c--)
	{

		putchar(c);
	}
	putchar('\n');
	return (0);

}
