#include "main.h"

/**
 * _isdigit - function to cheeck a digit is
 * between 0 to 9
 * @c: input int to cheeck
 *
 * Return: 1 is between range
 *	0 otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
