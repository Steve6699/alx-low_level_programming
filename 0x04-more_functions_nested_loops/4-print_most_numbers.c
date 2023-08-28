#include "main.h"

/**
 * print_most_numbers - print number from 0 to 9
 * without print 2 and 4
 *
 * Return: 0 (Success)
*/

void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c == 2 || c == 4)
			c++;
		_putchar(c + 48);
	}
	_putchar('\n');
}
