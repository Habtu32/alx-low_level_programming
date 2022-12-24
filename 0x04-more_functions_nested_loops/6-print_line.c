#include "main.h"
/**
* print_line - Write a function that draws a straight line in the terminal.
* @n: Integer amount of _
*/
void print_line(int p)
{
	char h;

	for (h = 0; h < p; h++)
		_putchar('_');
	_putchar('\n');
}
