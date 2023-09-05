#include "main.h"

/**
 * *string_toupper - chanage all lower case to
 * upper in string
 * @st: pointer to string
 * Return: pinter st
*/

char *string_toupper(char *st)
{
	int i;

	for (i = 0; st[i] != '\0'; i++)
	{
		if (st[i] >= 97 && st[i] <= 122)
		{
			st[i] = st[i] - 32;
		}
	}
	return (st);
}
