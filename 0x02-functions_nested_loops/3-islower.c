#include<stdio.h>
#include"main.h"
/**
 * _islower - to check if the digit is lower case
 * @c:  for argument from function
 * return:0 if the character is capital and returns 1 if the character is small
 */
int _islower(int c)
{
	char c = 'a';

	while (c <= 'z')
	{
		if ((c >= 'a') && (c <= 'z'))
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
