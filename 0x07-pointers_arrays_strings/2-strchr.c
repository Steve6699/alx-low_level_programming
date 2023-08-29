#include "main.h"

/**
 * *_strchr - files memory with cont byte
 * @s: pointer to put cont
 * @c: cont
 * Description: cont ref to contant
 * Return: pointer s
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}    
	}
	return ('\0');
}
