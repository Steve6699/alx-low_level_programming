#include "main.h"

/**
 * print_to_98 - function print natrual number to 98
 * @n: input start of number
 *
 * Description: must be ordered from n to 98
*/

void print_to_98(int n)
{
	int nu;

	if (nu < 98)
		for (nu = n; nu < 98; nu++)
			printf("%d, ", nu);
	else
		for (nu = n; nu > 98; nu--)
			printf("%d, ", nu);
	printf("98 \n");
}
