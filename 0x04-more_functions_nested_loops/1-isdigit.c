#include "main.h"
/**
 * _isdigit - to check if the char is digit
 * @c: check ASCII
 * Return: 1 if digit and 0 else
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
