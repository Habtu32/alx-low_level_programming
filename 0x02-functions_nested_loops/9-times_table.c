#include "main.h"
/**
 * times_table - print time table
 *
 * Return: no return
 */
void times_table(void)
{
	int x = 0;
	int y, s;

	while (x <= 9)
	{
		y = 0;

		while (y <= 9)
		{
			s = x * y;

			if (s <= 9)
			{
			_putchar(s + 48);
			}
			else
			{
			_putchar(s / 10 + 48);
			_putchar(s % 10 + 48);
			}
			_putchar(44);
			_putchar(32);
		}
		y++;
		_putchar('\n');

		x++;
	}
}
