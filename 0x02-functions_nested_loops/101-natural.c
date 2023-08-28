#include "main.h"

/**
 * main - Entry point
 *
 * Description: print sum of natrual number
 * that multiblis of 3 or 5 from 0 to 1024
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int num, sum;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3) || (num % 5))
			sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
