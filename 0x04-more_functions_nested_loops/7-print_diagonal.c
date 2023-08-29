#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: number of times to print char \
 *
 * Description: if n equal 0 or less just prin NL
*/

void print_diagonal(int n)
{
	int r, c;

	if (n == 0 || n < 0)
		_putchar('\n');
	else
	{
		for (r = 1; r <= n; r++)
		{
			for (c = 1; c <= r; c++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
