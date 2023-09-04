#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random password to file
 * Return: 0
*/

int main(void)
{
	int summ;
	char ch;

	srand(time(NULL));
	while (summ <= 2645)
	{
		ch = rand() % 128;
		summ += ch;
		_putchar(ch)
	}
	_putchar(2772 - summ);
	return (0);
}
