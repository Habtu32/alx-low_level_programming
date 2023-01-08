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

	for (i = 0; i <= n; i++)
	{
		if (i != n)
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
