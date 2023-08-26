#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Description: use _putchar function twise and
 * new line afted any time
*/

void print_alphabet_x10(void)
{
	int ch, l;

	for (l = 0; l <= 9; l++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
