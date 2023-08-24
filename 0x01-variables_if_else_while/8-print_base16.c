#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print hex from 0 to f
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int dig = 48;

	while (dig <= 102)
	{
		putchar(dig);

		if (dig == 57)
			dig += 39;
		dig++;
	}
	putchar('\n');
	return (0);
}

