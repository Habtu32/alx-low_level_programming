#include "main.h"
/**
 * print_sign - to print
 *
 * @n: asci value
 *
 *Return: 1 if number is less than zero and shows 0
 * if equal to zero and -1 if less zan zero
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
