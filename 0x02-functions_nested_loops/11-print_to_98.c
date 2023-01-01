#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print natural number
 * @n:to print natural number
 * Return:
 */
void print_to_98(int n)
{

	if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}

		}
	}
	else if (n > 98)
	{
		for (n = n; n >= 98; n--)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
		}

	}
	_putchar('\n');
}
