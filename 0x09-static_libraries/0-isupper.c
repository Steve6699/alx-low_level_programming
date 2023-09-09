#include "main.h"

/**
 * _isupper - function to cheeck the character
 * is upper case
 * @c: the input character to cheeck
 *
 * Return: 1 if is char in upper-case
 *	0 otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	return (0);
}
