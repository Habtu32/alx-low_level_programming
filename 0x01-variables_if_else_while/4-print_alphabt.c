#include <stdio.h>
/**
 *main - main function to print alpahbetic character
 *
 *Return:0
 */
int main(void)
{
	char c = 'a';

	for (; c <= 'z'; c++)
	{
		if ((c != 'e') && (c != 'q'))

		putchar(c);
	}
	putchar('\n');
	return (0);

}
