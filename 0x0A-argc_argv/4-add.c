#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: number of arg
 * @argv: array of arg
 * Return: 0 if success, 1 if error
*/

int main(int argc, char *argv[])
{
	int sum;
	char *a;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*a < '0' || *a > '9')
				return (printf("Error\n"), 1);

		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);	
}
