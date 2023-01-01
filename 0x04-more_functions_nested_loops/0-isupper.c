#include "main.h"
/**
 * _isupper - check if the char is capital
 * @c: accept the argument
 *
 * Return:1 if capital and shows 0 small
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
