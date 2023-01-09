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
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';

return (dest);
}

