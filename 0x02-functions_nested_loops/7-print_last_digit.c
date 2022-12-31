#include "main.h"
/**
 * print_last_digit - print last digit
 *
 * @x: ASCII code of thr
 *
 * Return: 0 if not thr same
 */
int print_last_digit(int x)
{
	int f = x % 10;

	if (f < 0)
	{
	_putchar(-f + 48);
	return (-f);
	}
	else
	{
	_putchar(f + 48);
	return (f);
	}
}
