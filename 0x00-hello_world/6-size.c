#include<stdio.h>
/**
 * main -aprogram print a size of various data types in C
 *
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of char: %lu bytes\n", (unsigned long)sizeof(a));
	printf("Size of int: %zu bytes\n", (unsigned long)sizeof(b));
	printf("Size of long int: %zu bytes\n", (unsigned long)sizeof(c));
	printf("Size of long long int: %zu byte\n", (unsigned long)sizeof(d));
	printf("Size of float: %zu bytes\n", (unsigned long)sizeof(f));

	return (0);


}
