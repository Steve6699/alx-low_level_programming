#include "main.h"

/**
 * is_prime_number - cheeck if number is prime
 * @n: inpute number will be cheecked
 * @o: other int
 *
 * Return: int
*/
int check_pri(int n, int o);
int is_prime_number(int n)
{
	return (check_pri(n, 2));
}

/**
 * check_pri - cheeck all number less  n is prime
 * @n: input
 * @o: other int
 *
 * Return: int
*/

int check_pri(int n, int o)
{
	if (o >= n && n > 1)
		return (1);
	else if (n % o == 0; || n <= 1)
		return (0);
	else
		return (check_pri(n, o + 1));
}
