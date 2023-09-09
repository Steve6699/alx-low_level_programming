#include "main.h"

/**
 * _isalpha - check if is alphabet
 * @c: char input to check
 *
 * Return: 1 is alphabet
 * otherwise 0 (Success)
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
