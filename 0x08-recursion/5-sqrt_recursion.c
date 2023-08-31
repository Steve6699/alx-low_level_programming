#include "main.h"

/**
 * _sqrt_recursion - that returns the natural
 * square root of a number
 * @n: number input
 * @v: value to square root
 * Return: int
*/

int square_f(int n, int v);
int _sqrt_recursion(int n)
{
	return (square_f(n, 1));
}

/**
 * square_f - find square
 * @n: input number 1
 * @v: value to square root
 *
 * Return: int
*/

int square_f(int n, int v)
{
	if (v * v == n)
		return (v);
	else if (v * v < n)
		return (square_f(n, v + 1));
	else
		return (-1);
}
