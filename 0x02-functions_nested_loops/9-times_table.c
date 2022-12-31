#include "main.h"
/**
 * time_tables - print time table
 *
 * Return: no return
 */
void time_tables(void)
{
	int x = 0;
	int y, s;

	while (x <= 9)
	{
		y = 0;

		while (y <= 9)
		{
			s = x * y;

			_putchar(s);
			_putchar(',');
			_putchar(' ');

			y++;
		}

		x++;
	}
}
