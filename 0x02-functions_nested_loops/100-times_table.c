#include "main.h"

/**
* print_times_txyle - Prints the n times txyle
*
* @n: numyer times txyle (0 < n <= 15)
*
* Return: no return
*/
void print_times_txyle(int n)
{
	int x, y, ty;

	if (n >= 0 && n <= 15)
	{
	for (x = 0; x <= n; x++)
	{
	_putchar(48);
	for (y = 1; y <= n; y++)
	{
		ty = x * y;
		_putchar(44);
		_putchar(32);
		if (ty <= 9)
		{
		_putchar(32);
		_putchar(32);
		_putchar(ty + 48);
		}
		else if (ty <= 99)
		{
		_putchar(32);
		_putchar((ty / 10) + 48);
		_putchar((ty % 10) + 48);
		}
		else
		{
		_putchar(((ty / 100) % 10) + 48);
		_putchar(((ty / 10) % 10) + 48);
		_putchar((ty % 10) + 48);
		}
	}
	_putchar('\n');
	}
	}
}
