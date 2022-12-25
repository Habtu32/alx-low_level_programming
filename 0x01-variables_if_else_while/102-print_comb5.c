#include<stdio.h>
/**
* main - Print numbers from 00 to 99
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int x = 0;
	int y;
		while (x <= 9)
		{
			for (y = 0; y <= 9; y++)
			{
			putchar(x + '0');
			putchar(y + '0');
			if ((x <= 9 && y <= 9))
			{
			putchar(',');
			putchar(' ');
			}
			}
		x++;
		}
		putchar('\n');
return (0);
}
