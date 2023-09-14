#include "main.h"

/**
 * *_setmemb - fill a memory with a const byte
 * @c: pointer to memory
 * @a: const
 * @x: int byte to use
 * Return: pointer
*/

char *_setmemb(char *c, char a, unsigned int x)
{
	int *pt = c;

	while (x--)
		*c++ = a;

	return (pt);
}

/**
 * *_calloc - allocate memory for array on malloc
 * @nmemb: array len
 * @size: size of each eleme
 * Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(sizeof(int) * nmemb);

	if (s == 0)
	{
		return (NULL);
	}
	else
	{
		_setmemb(s, 0, (sizeof(int) * nmemb));
	}
	return (s);
}
