#include "main.h"

/**
 * _strlen_recursion - function that return
 * length of string
 * @s: pointer
 *
 * Return: len
*/

int _strlen_recursion(char *s)
{
	int len;

	if (*s > '\0')
		len += _strlen_recursion(s + 1) + 1;
	return (len);
}
