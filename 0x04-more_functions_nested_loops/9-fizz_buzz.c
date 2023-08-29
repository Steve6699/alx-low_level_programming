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
	char f = "Fizz";
	char b = "Buzz";
	char fb = "FizzBuzz";

	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && !(i % 5 == 0))
			pfintf("%c", f);
		else if (i % 5 = 0 && !(i % 3 == 0))
			printf("%C", b);
		else if (i % 3 == 0 && i % 5 == 0)
			printf("%c", fb);
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
