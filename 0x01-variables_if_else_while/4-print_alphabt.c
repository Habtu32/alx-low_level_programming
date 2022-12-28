#include<stdio.h>
/**
 *main - main function that return alphabet except a and e
 *
 *Return:0
 */
int main()
{
	char a = 'a';

	while (a <= 'z')
	{
	if ((a != 'e') && (a != 'q'))
	{
	putchar(a);
	}
	a++;
	}
	putchar('\n');
return (0);
}
