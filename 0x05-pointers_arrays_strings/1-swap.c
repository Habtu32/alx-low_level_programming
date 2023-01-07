#include "main.h"
/**
 * swap_int - swap number
 * @a: parameter one
 * @b: parameter two
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int x = 98;
	int y = 44;

	a = &x;
	b = &y;

	*b = x;
	*a = y;
}
