#include "main.h"

/**
 * *_strdup - copy a string with malloc
 * @str: pointer to string
 * Return: pointer to string if pass, NULL if F
*/

char *_strdup(char *str)
{
	int i, s;
	char *n;

	if (str == 0)
		return (NULL);
	for (; str[s] != '\0'; s++)
	;

	n = malloc(s * sizeof(*str) + 1);

	if (n == 0)
		return (NULL);
	{
		for (; i < s; i++)
			n[i] = str[i];
	}
	return (n);
}
