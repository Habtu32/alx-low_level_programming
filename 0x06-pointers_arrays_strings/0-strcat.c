#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int len, i, j;

	for (i = 0; i < dest[i] != '\0'; i++)
	{
	}
	len = i;

	for (j = 0; j < src[j] != '\0'; j++)
	{
		dest[len] = src[j];

		len++;
	}
	dest[len] = '\0';

return (dest);
}
