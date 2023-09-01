#include "main.h"

/**
 * l_index - return last index in string
 * @s: pointer to string
 * Return: int
*/

int is_palindrome(char *s);
int cheecks(char *s, int st, int e, int m);
int l_index(char *s)
{
	int last = 0;

	if (*s > '\0')
	{
		last += (l_index(s + 1) + 1);
	}
	return (last);
}

/**
 * is_palindrome - function test if string
 * is palindrome
 * @s: pointer to string
 * Return: 1 is palindrome, 0 otherways
*/

int is_palindrome(char *s)
{
	int e = l_index(s);

	return (cheecks(s, 0, e - 1, e % 2));
}

/**
 * cheecks - cheeck if palindrome
 * @s: pointer string
 * @st: start
 * @e: end
 * @m: mod
 * Return: 0 or 1
*/

int cheecks(char *s, int st, int e, int m)
{
	if ((st == e && m != 0) || (st == end + 1 && m == 0))
		return (1);
	else if (s[st] != s[e])
		return (0);
	else
		return (cheecks(s, st + 1, e - 1, m));
}
