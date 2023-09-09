#include "main.h"

/**
 * _islower - cheeck the character is lower case
 * @c: The character well be cheecked
 *
 * Return: 1, if success
 * 0 if fail
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
