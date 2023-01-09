#include"main.h"
#include<stdio.h>
/**
 * *_strcpy - copy character to destination
 * @dest: destination file
 * @src: source file
 * Return: dest
 *
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] == '\0'; i++)
	{
	}

	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';

return (dest);
}

