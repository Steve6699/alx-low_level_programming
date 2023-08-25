#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints all possible
 * combinations of two two-digit numbers
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int fn = 0;
	int sn;

	while (fn <= 99)
	{
		sn = fn;

		while (sn <= 99)
		{
			if (sn != fn)
			{
				putchar((fn / 10) + 48);
				putchar((fn % 10) + 48);
				putchar(' ');
				putchar((sn / 10) + 48);
				putchar((sn % 10) + 48);

				if (fn + sn != 197)
				{
					putchar(',');
					putchar(' ');
			}
		}
		sn++;
	}
	fn++;
	}
	putchar('\n');
	return (0);
}
