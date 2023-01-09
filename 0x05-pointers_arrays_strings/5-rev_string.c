#include "main.h"
#include<stdio.h>
/**
 *rev_string - print reverse string
 *@s:string
 *Return:none
 */
void rev_string(char *s)
{
	int i, j, len;

	for (i = 0; s[i] != '\0'; i++)
	{

	}
	len  = i;
	for (j = 0; j < len / 2; j++)
	{
		temp = s[j];
		s[j] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
