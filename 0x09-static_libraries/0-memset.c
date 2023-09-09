#include "main.h"

/**
 * *_memset - file in memory have a contant byte
 * @s: pointer put contant inside
 * @b: cont
 * @n: max value byte to use
 *
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
