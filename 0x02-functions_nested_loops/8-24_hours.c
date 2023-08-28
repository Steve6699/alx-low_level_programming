#include "main.h"

/**
 * jack_bauer - print evry minute of day
*/

void jack_bauer(void)
{
	for (int hour = 0; hour <= 23; hour++)
	{
		for (int min = 0; min <= 59; min++)
		{
			_putchar(hour / 10 + 48);
			_putchar(hour % 10 + 48);
			_putchar(':');
			_puchar(min / 10 + 48);
			_putchar(min % 10 + 48);
			_putchar('\n');
		}
	}
}
