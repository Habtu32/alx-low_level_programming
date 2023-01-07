#include "main.h"
#include<stdio.h>
/**
 *rev_string - print reverse string
 *@s:string
 *Return:none
 */
void rev_string(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	
	}
	for (len = len - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}

}
