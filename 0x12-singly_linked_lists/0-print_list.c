#include <lists.h>

/**
 * _strLen - find en of str
 * @x: str
 * Return: int len
*/

int _strLen(char *x)
{
	int s = 0;

	if (!x)
		return (0);
	while (*x++)
		s++;
	return (s);
}

/**
 * print_list - pr list
 * @h: pointer
 * Return: size of list
*/

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		printf("[%d] %s\n", _strLen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		s++:
	}
	return (s);
}
