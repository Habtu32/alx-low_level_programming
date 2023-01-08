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
	char temp;
	int middle, i, last;

	while (s[len] != '\0')
	{
		len++;
	}

	last = len;
	middle = last / 2;

	for (i = 0; i < middle; i++)
	{
		temp = s[i];

		s[i] = s[last];

		s[last] = temp;

		last--;

	}

}
