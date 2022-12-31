#include "main.h"
/**
 * jack_bauer - to print 24 hours
 *
 * Return: no return
 */
void jack_bauer(void)
{
	int x1, x2, x3, x4;

	x1 = 0;

	while (x1 <= 2)
	{
		x2 = 0;

		while (x2 <= 3)
		{
			x3 = 0;

			while (x3 <= 5)
			{
				x4 = 0;

				while (x4 <= 9)
				{

					_putchar(x1);
					_putchar(x2);
					_putchar(':');
					_putchar(x3);
					_putchar(x4);
					_putchar('\n');
					x4++;
				}

				x3++;
			}

			x2++;
		}

		x1++;
	}
}
