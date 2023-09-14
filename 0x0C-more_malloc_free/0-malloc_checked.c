#include "main.h"

/**
 * *malloc_checked - alloc memory with malloc
 * @b: unsigned int
 * Return: pointer
*/

void *malloc_checked(unsigned int b)
{
	int *a = malloc(b);

	if (a == 0)
		exit(98);

	return (a);
}
