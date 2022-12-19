#include "main.h"
/**
 *_islower - for detecting lower case character
 *@c: lowercase
 *Return:1 if etter is lower and 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}
