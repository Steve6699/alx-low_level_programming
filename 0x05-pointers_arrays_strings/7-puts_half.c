#include "main.h"

/**
 * puts_half - print half of string
 * @str: pointer to string
*/

void puts_half(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
		;
	length++;
	if (length % 2 == 0)
	{
		int i = length / 2;

		for (i; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	if (length % 2 != 0)
	{
		n = (length - 1) / 2;

		for (n; str[n] != '\0'; n++)
			_putchar(str[n]);
	}
	_putchar('\n');
}
