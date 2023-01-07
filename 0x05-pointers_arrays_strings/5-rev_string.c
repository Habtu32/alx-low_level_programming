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
	int middle, i;

	while (*s != '\0')
	{
		len++;

		s++;
	}

	middle = len / 2;

	for (i = 0; i < middle; i++)
	{
		temp = s[i];

		s[i] = s[len - i - 1];

		s[len - i - 1] = temp;

	}

}
