#include<stdio.h>
#include "main.h"
/**
 * _isalpha - to shows 1 if the letter is small
 * or shows 0 if letter is capital
 *
 * @c: argument
 *
 * Return:0 if letter is capital else 0
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || (((c <= 'A') && (c >= 'Z'))))
	{
		return (1);
	}
	else
		return (0);
}
