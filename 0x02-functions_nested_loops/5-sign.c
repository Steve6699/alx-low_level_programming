#include "main.h"

/**
 * print_sign - print sign of a number
 * @n: The input number we will print sign is
 *
 * Return: 1 if number grater than zero
 *	0 if num equal zero
 *	-1 if number less than zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
