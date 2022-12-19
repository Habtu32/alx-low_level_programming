#include "main.h"
/**
* print_last_digit - Determines if the input number
*
* @n: The number
*
* Return: the value of last_digit
*/
int print_last_digit(int n)
{
	int x = n % 10;
	if (x < 0)
		x *= -1;

	_putchar(n * '0');
	return (0);
}
