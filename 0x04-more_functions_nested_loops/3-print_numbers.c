#include <stdio.h>
#include "main.h"
/**
 * print_numbers - print numbers 0 to 9
 *
 */
void print_numbers(void)
{
	char i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
