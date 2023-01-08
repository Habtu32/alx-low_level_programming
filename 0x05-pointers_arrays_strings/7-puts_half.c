#include"main.h"
#include<stdio.h>
/**
 *puts_half - print char
 *
 *@str: string print
 *Return: no value
 */
void puts_half(char *str)
{
	int i, j, mid;

	for (i = 0; str[i] != '\0'; i++)

	mid = i / 2;

	for (j = i; j >= mid; j--)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
