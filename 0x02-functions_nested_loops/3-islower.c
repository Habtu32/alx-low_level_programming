#include<stdio.h>
#include"main.h"
/**
 * _islower - to check if the digit is lower case
 * @c:  for argument from function
 * return:0 if the character is capital and returns 1 if the character is small
 */
int _islower(int c)
{
	char q = 'a';

	for (q = 'a'; q <= 'z'; q++)
	{
		if ((q >= 'a') && (q <= 'z'))
		{
			return (1);
		}
		else
		{
			return (0);
		}
		c++;
	}
return (0);
}
