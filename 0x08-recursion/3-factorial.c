#include "main.h"

/**
 * factorial - function calculat fact
 * @n: input number to get fact
 *
 * Return: int
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
