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
	int i, count, num;

	for (int i = 1; i <= 10; i++)
	{
		for (count = 0; count <= 14; count++)
		{
			num = count;

			if (count > 9)
			{
				_putchar(1 + 48);
				num = count % 10;
			}
		_putchar(num + 48);
	}
	_putchar('\n');
}
}
