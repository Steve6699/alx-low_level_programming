#include <stdio.h>

/**
 * main - print all arg was passed in program
 * evrey arg will print in one line foolowed NL
 * @argc: number of arg
 * @argvv: array of string of arg
 * Return: 0 if success
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
