#include "main.h"
/**
 * times_table - print time table
 *
 * Return: no return
 */
void times_table(void)
{
	int x = 48;
	int y, s;

	while (x <= 57)
	{
		y = 48;

		while (y <= 57)
		{
			s = x * y;

			_putchar('s');
			_putchar(',');
			_putchar(' ');

			y++;
		}
		_putchar('\n');

		x++;
	}
}
