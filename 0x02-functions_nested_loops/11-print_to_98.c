#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print natural number
 * @n:to print natural number
 * Return:
 */
void print_to_98(int n)
{

	if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			if (n <= 9)
			{
				_putchar(n + 48);
			}
			else
			{
				_putchar(n / 10 + 48);
				_putchar(n % 10 + 48);

			}
			if (n != 98)
			{
				_putchar(44);
				_putchar(32);
			}
		}
	}
	else if (n > 98)
	{
		for (n = n; n >= 98; n--)
		{
			_putchar(n / 10 + 48);
			_putchar(n / 10 + 48);
		}

		_putchar(44);
		_putchar(32);

	}
	_putchar('\n');
}
