#include "main.h"

/**
 * _strlen - returnes the ength of a string
 *
 * @s: string parameter input
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int counter;

	fot (counter = 0; *s != '\0'; s++)
		++counter;
	return (counter);
}
