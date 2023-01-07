#include "main.h"
#include<stdio.h>
/**
 *rev_string - print reverse string
 *@s:string
 *Return:none
 */
void rev_string(char *s)
{
	int len = 0;
	int count;

	while (*s != '\0')
	{
		len++;

		s++;
	}
	count = len;

	while (s[count] != '\0')
	{
		putchar(s[count]);

		count--;
	}

}
