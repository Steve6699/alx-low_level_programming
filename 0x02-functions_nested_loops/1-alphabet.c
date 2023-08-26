#include "main.h"

/**
 * print_alphabet - print alphabet with _putchar
 *
 * Return: 0 (Success)
*/

void print_alphabet(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
