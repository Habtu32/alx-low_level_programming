#include "main.h"
/**
 * print_line - print line
 *
 * @n: ASCII code
 *
 * Return: no return
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(95);
		}
	}
	else
	{
		_putchar('\n');
	}
}
