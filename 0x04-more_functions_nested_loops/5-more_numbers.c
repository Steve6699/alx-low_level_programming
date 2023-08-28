#include "main.h"

/**
 * more_numbers - print num from 0 to 14 folo NL
 *
 * Description: use three times fun _putchar
 *
 * Return: 0 (Success)
*/

void more_numbers(void)
{
	for (int i = 0; i <= 14; i++)
	{
		if (i >= 10)
			_putchar((i / 10) + 48);
		_putchar((i & 10) + 48);
	}
	_putchar('\n');
}
