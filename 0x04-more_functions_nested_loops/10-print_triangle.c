#include "main.h"

/**
 * print_triangle - function print triangle
 * @size: input to size of triangle
*/

void print_triangle(int size)
{
	int row, col;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (col = 1; col <= size; col++)
			{
				if ((row + col) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
		_putchar('\n');
		}
	}
}
