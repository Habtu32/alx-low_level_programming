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
	int i, j;

	for (i = 0; i < dest[i] != '\0'; i++);

	for (j = 0; j < src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];

	}
	dest[i] = '\0';

return (dest);
}
