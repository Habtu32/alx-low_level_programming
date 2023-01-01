#include "main.h"
/**
 * print_to_98 - print natural number
 * @n:to print natural number
 * Return:
 */ 
void print_to_98(int n)
{
	n = 0;

	while (n <= 98)
	{
		if (n <= 9)
		{
			_putchar(n + 48);
		}
		else
		{
			_putchar(n % 10 + 48);
			_putchar(n / 10 + 48);
		}

		_putchar(44);
		_putchar(32);

		n++;

	}
	_putchar('\n');
}
