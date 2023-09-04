#include "main.h"

/**
 * puts2 - print evry other character of string
 * @str: pointer to string
 * Return: void
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
