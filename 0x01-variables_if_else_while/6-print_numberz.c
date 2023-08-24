#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print diget from 0 to 9
 * with function putcah without use dataType char
 *
 * Return: 0 (Succes)
*/

int main(void)
{
	int dig = 0;

	while (dig <= 9)
	{
		putchar(dig + '0');
		dig++;
	}
	putchar('\n');
	return (0);
}
