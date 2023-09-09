#include <stdio.h>
#include <stdlib.h>

/**
 * main - mult to int and print result
 * the program shuld take to arg as input
 * @argc: number of arg
 * @argv: array of arg
 * Return: 0 if success, 1 if error
*/

int main(int argc, char *argv[])
{
	int res;

	if (argc == 3)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
