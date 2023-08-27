#include "main.h"

/**
 * _abs - function that print abs value of int
 * @n: input number will be abs
 *
 * Description: take input value and print abs of the int
 *
 * Return: 0 (Success)
*/

int _abs(int n)
{
	if (n > 0)
	{
		n = (-1) * n;
		_putchar(n);
	}
	return (0);
}
