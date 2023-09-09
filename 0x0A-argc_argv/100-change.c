#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number
 * of coins to make change for an amount of money
 * @argc: int number
 * @argv: list
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
	int i, LC = 0, money = atoi(argv[1]);
	int c[] = {25, 10, 5, 2, 1};

	for (i = 0; i < 5; i++)
	{
		if (money >= c[i])
		{
			LC += money / c[i];
			money = money % c[i];
			if (money % c[i] == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", LC);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
