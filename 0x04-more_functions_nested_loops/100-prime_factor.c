#include <stdio.h>

/**
 * _sqrt - find square root of num
 * @a: input num
 *
 * Return: square root of a
*/

double _sqrt(double a)
{
	float sq, tmp;

	sq = a / 2;
	tmp = 0;

	while (sq != tmp)
	{
		tmp = sq;
		sq = (a / tmp + tmp) / 2;
	}
	return (sq);
}

/**
 * largest_prime_factor - find and print large
 * prime facrot for num n
 * @n: input number
*/

void largest_prime_factor(long int n)
{
	int p, l;

	while (n % 2 == 0)
		n = n / 2;
	for (p = 3; p <= _sqrt(n); p += 2)
	{
		while (n % p == 0)
		{
			n = n / p;
			l = p;
		}
	}
	if (n > 2)
		l = n;
	printf("%d\n", l);
}

/**
 * main - Entry point
 *
 * Return: 0 Always
*/

int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
