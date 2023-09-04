#include "main.h"

/**
 * print_array - function print element of array
 * @a: pointer a
 * @n: number of element in the array
 * Return: void
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i == n)
			printf("%d\n", a[i]);
		else
			printf("%d, ", a[i]);
	}
}
