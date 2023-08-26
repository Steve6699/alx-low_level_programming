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
	int ch = 'a';
	int i = 0;

	while (i < 9)
	{
		while (ch <= 'z')
		{
			_putchar(ch + '\n');
			ch++;
		}
	i++;
	}
	_putchar('\n');
}
