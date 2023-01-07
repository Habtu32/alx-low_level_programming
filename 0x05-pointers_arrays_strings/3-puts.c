#include"main.h"
#include<stdio.h>
/**
 * _puts - function print string
 *
 * @str: charcter accept string
 *
 * Return:none
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);

		str++;
	}
	putchar('\n');
}
