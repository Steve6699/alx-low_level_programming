#include "main.h"

/**
 * *leet -  encodes a string into 1337
 * @s: pointer to string
 * Return: pointer ptr
*/

char *leet(char *s)
{
	char *ptr = s;
	char key1[] = {'A', 'E', 'O', 'T', 'L'};
	int v[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*s)
	{
		for (i = 0; i < sizeof(key1) / sizeof(char); i++)
		{
			if (*s == key1[i] || *s == key1[i] + 32)
			{
				*s = 48 + v[i];
			}
		}
		s++;
	}
	return (ptr);
}
