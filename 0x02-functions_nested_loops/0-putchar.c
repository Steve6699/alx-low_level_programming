#include "main.h"

/**
 * main - Entry point
 *
 * Description: program prinnt _putchar
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char ch[] = "_putchar";
	int c;

	for (c = 0; c < 8; c++)
		_putchar(ch[c]);
	_putchar('\n');
	return (0);
}
