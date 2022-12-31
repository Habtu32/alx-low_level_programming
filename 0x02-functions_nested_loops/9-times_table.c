#include "main.h"
/**
 * times_table - print time table
 *
 * Return: no return
 */
void times_table(void)
{
	int x = 0;
	int y;

	while (x <= 9)
	{
		y = 0;

		while (y <= 9)
		{
			_putchar((x * y) + 48);
			_putchar(',');
			_putchar(' ');

			y++;
		}
		_putchar('\n');

		x++;
	}
}
