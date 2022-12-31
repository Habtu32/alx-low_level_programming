#include<stdio.h>
/**
 * _isalpha - to shows 1 if the letter is small
 * or shows 0 if letter is capital
 *
 * @c: argument 
 *
 *return:0 if letter is capital else 0
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'a')) || (((c <= 'A') && (c >= 'Z'))))
	{
		return (1);
	}
	else 
		return (0);
}
