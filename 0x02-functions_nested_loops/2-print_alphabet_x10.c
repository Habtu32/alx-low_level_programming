#include<stdio.h>
#include "main.h"
/**
 *print_alphabet_x10 - to print alhabet in lower case
 *
 * return :0
 */
void print_alphabet_x10(void)
{

	int i = 1;

	while (i <= 10)
	{
		char c= 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		putchar('\n');

		i++;
	}
}
