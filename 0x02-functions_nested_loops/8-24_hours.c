#include "main.h"
/**
* jack_bauer - prints every minute of the day
*
* Return: no return
*/
void jack_bauer(void)
{
	int x, y, z, k;

	for (x = 48; x <= 50; x++)
	{
		for (y = 48; y <= 57; y++)
		{
			for (z = 48; z <= 53; z++)
			{
				for (k = 48; k <= 57; k++)
				{
					if (x >= 50 && y >= 52)
					break;
					_putchar(x);
					_putchar(y);
					_putchar(58);
					_putchar(z);
					_putchar(k);
					_putchar('\n');
				}
			}
		}
	}
}
