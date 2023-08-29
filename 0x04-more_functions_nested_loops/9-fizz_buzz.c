#include "main.h"

/**
 * main - Entry point
 *
 * Description: program print number from 1 to
 * 100 But for multiples of three print Fizz
 * instead of the number and for the multiples
 * of five print Buzz
 * For numbers which are multiples of both three
 * and five print FizzBuzz
 *
 * Return: 0 (Success)
*/

int main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && !(i % 5 == 0))
			printf("Fizz");
		else if (i % 5 == 0 && !(i % 3 == 0))
			printf("Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
