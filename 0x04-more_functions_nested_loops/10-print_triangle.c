#include "main.h"
/**
* print_triangle - prints a triangle
* @s: takes in a integer for size of triangle
*/
void print_triangle(int s)
{
	int r, c, k;

	if (s <= 0)
		_putchar('\n');
	for (r = 0; r < s; r++)
	{
		for (c = s - r; c > 1; c--)
			_putchar(' ');
		for (k = r + c; k >= 1; k--)
			_putchar('#');
		_putchar('\n');
	}
}
