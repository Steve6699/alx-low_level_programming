#include "main.h"

/**
 * _puts - prints a string,folloed by a new line to stdout
 *
 * @str: string parameter to print
 *
 * Return: Nothing
*/

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s + 0);
		s++;
	}
	_putchar('\n');
}
