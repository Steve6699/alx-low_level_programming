#include "main.h"

/**
 * _strLen - find len of string
 * @c: string
 * Return: int
*/

int _strLen(char *c)
{
	int i = 0;

	for (; c[i] != '\0'; i++)
	;

	return (i);
}

/**
 * *argstostr - concatenates all the arguments
 * @ac: int counter
 * @av: pointer to argument
 * Return: string
*/

char *argstostr(int ac, char **av)
{
	int i = 0, g = 0, cn = 0, cmp = 0;
	char *c;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	else
	{	
		for (; i < ac; i++, cn++)
			cn += _strLen(av[i]);
		c = malloc(sizeof(char) * cn + 1);

		if (c == 0)
			return (NULL);

		for (i = 0; i < ac; i++)
		{
			for (g = 0; av[i][g] != '\0'; g++, cmp++)
				c[cmp] = av[i][g];

			c[cmp] = '\n';
			cmp++;
		}
	}
	c[cmp] = '\0';
	return (c);
}
