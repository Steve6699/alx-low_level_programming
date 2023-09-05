#include "main.h"

/**
 * reverse_array -  reveres array
 * @a: pointer to array
 * @n: number of element of arry
 * Retutn: void
*/

void reverse_array(int *a, int n)
{
	int i, j, te;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		te = a[i];
		a[i] = a[j];
		a[j] = te;
	}
}

