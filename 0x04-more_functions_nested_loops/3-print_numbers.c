#include "main.h"

/**
 * print_numbers - function print number from 0
 * to 9
 *
 * Description: use _putchar twois in code
*/

void print_numbers(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
		_putchar(ch + 48);
	_putchar('\n');
}
