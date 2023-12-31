#include "main.h"

/**
 * _pow_recursion - that returns the value
 * of x raised to the power of y
 * @x: num base
 * @y: num raised as power
 * Return: int v
*/

int _pow_recursion(int x, int y)
{
	int v;

	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);
	v = (x * _pow_recursion(x, y - 1));
	return (v);
}
