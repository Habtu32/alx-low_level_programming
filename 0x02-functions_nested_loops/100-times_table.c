#include "main.h"
/**
 * print_times_table - to print multiplication of no
 *
 *@n: to accept character
 *
 * Retun: no return
 */
void print_times_table(int n)
{
	int i, j, s;

	if ((n <= 15) || (n > 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				s = j * i;

				if (s <= 9)
				{
					_putchar(s + 48);
				}
				else
				{
					_putchar(s % 10 + 48);
					_putchar(s / 10 + 48);
				}
					_putchar(44);
					_putchar(32);
			}
			_putchar('\n');
		}
	}
}
