#include "main.h"
/**
 * times_table - print time table
 *
 * Return: no return
 */
void times_table(void)
{
	int x = 48;
	int y;

	while (x <= 57)
	{
		y = 48;

		while (y <= 57)
		{
			_putchar((x * y) + '0');
			_putchar(',');
			_putchar(' ');

			y++;
		}
		_putchar('\n');

		x++;
	}
}
