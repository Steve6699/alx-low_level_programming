#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords for 101-crackme
 * Return: zero
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
