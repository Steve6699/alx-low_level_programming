#include "main.h"

/**
 * *create_array - function that creates an array
 * of chars, and initializes it with a specific
 * char
 * @size: unsigned int to input size
 * @c: char will be initializes in array
 * Return: pointer to array if success, NULL if F
*/

char *create_array(unsigned int size, char c)
{
	char *s = (char *) malloc(size * sizeof(char));

	if (s == 0)
	{
		return (NULL);
	}
	else
	{
		int i;

		for (i = 0; i < size; i++)
		{
			s[i] = c;
		}
	}
	return (s);
}
