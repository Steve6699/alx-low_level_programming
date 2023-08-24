#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of single-digit numbers.
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int di = 0;

	while (di <= 9)
	{
		putchar(di + '0');

		if (di != 9)
		{
			putchar(',');
			putchar(' ');
		}
		di++;
	}
	putchar('\n');
	return (0);
}
