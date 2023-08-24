#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all single diget number of base 10 foloowed by new line
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
