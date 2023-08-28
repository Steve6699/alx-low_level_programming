#include "main.h"

/**
 * times_table - print 9 times table
 *
 * ex
 * 0, 0, ,0 ..
 * 0, 1, 2, ..
*/

void times_table(void)
{
	int num, mult, proud;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			proud = num * mult;

			if (proud <= 9)
				_putchar(' ');
			else
				_putchar((proud / 10) + 48);
			_putchar((proud % 10) + 48);
		}
		_putchar('\n');
	}
}
