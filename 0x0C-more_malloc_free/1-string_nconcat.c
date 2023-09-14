#include "main.h"

/**
 * *string_nconcat - concat to string until nB s2
 * @s1: string
 * @s2: string
 * @n: int to detrmain byte to cpy from s2
 * Return: pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *st;
	unsigned int i, g, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	st = malloc(len1 + n + 1);

	if (st == 0)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		st[i] = s1[i];
	for (g = 0; g < n; g++)
	{
		st[i] = s2[g];
		i++;
	}
	st[i] = '\0';
	return (st);
}

