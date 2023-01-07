#include "main.h"
#include<stdio.h>
/**
 * _strlen - return string
 *
 *@s: sting accept
 *
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;
	int l = *s;

	while (l != '\0')
	{
		l++;
		len++;
	}

return (len);
}
