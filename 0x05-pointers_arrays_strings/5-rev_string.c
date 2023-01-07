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

	while (*s != '\0')
	{
		len++;

		s++;
	}

	while (s[len] != '\0')
	{
		putchar(s[count]);

		len--;
	}

}
