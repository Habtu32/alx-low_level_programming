#include "main.h"
/**
* print_square - function to print a square
* @s: takes in the s of the square
*/
void print_square(int s)
{
	int i, j;

	if (s <= 0)
		_putchar('\n');
	for (i = 0; i < s; i++)
	{
		for (j = 0; j < s; j++)
			_putchar('#');
		_putchar('\n');
	}
}
