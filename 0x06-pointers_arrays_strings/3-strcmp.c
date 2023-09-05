#include "main.h"

/**
 * _strcmp - function compare to string
 * @s1: string one
 * @s2: string two
 * Return: int equ
*/

int _strcmp(char *s1, char *s2)
{
	int equ = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equ = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (equ);
}

