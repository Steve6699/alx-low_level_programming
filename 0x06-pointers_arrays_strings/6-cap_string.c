#include "main.h"
#include <stdio.h>

/**
 * is_lower - cheeck if char in lower case
 * @c: char will be cheecked
 * Return 1 if true, 0 if false
*/

int is_lower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * is_del - cheeck if is char is delmenter
 * @c: char
 * Return: 1 if true, 0 if false
*/

int is_del(char c)
{
	int i;
	char del[] = {"\t\n,.!?\"(){}"};

	for (i = 0; i < 12; i++)
		if (c == del[i])
			return (1);
	return (0);
}

/**
 * *cap_string - function that capitalizes all
 * words of a string
 * @str: pointer to string
 * Return: ptr
*/

char *cap_string(char *str)
{
	char *ptr = str;
	int fouDel = 1;

	while (*str)
	{
		if (is_del(*str))
			fouDel = 1;
		else if (is_lower(*str) && fouDel)
		{
			*str -= 32;
			fouDel = 0;
		}
		else
			fouDel = 0;
		str++;
	}
	return (ptr);
}
