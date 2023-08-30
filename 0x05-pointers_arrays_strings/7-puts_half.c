#include "main.h"

/**
 * puts_half - print half of string
 * @str: pointer to string
*/

void puts_half(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; ++length)
		;
	length++;
	for (length /= 2; str[length] != '\0'; length++)
		_putchar(str[length];
	_putchar('\n');
}
