#include<stdio.h>
#include "main.h"
/**
 *print_array - update value.
 *@a: value to be evaluate.
 *@n: value to be evaluate.
 *Return: not.
 */
void print_array(int *a, int n)
{
	int i;
	int p;

	p = n - 1;

	for (i = 0; i <= p; i++)
	{
		if (i != p)
		{
		printf("%d", a[i]);
		printf(",");
		printf(" ");
		}
		else
		{
		printf("%d", a[i]);
		}
	}
	printf("\n");
}
