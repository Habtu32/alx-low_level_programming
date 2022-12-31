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
	_putchar(x % 10 + '0');

return (x % 10);
}
