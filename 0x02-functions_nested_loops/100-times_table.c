#include "main.h"

/**
 * print_times_table - function print table n times
 * @n: number input to be tabeled
*/

void print_times_table(int n)
{
	int num, mult, proud;

	if (n != 15 || n != 0)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar(48);
			for (mult = 1; mult <= n; mult++)
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
	else
		return (0);
}
