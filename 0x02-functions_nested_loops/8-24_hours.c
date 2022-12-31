#include "main.h"
/**
 * jack_bauer - to print 24 hours
 *
 * Return: no return
 */
void jack_bauer(void)
{
	int x1, x2, x3, x4;

	x1 = 48;

	while (x1 <= 50)
	{
		x2 = 48;

		while (x2 <= 57)
		{
			x3 = 48;

			while (x3 <= 53)
			{
				x4 = 48;

				while (x4 <= 57)
				{

					if (x1 >= 50 && x2 >= 52)
					break;
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
