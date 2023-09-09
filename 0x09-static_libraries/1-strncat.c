#include "main.h"

/**
 * *_strncat - function is similar to the _strcat
 * function, except that it will use at most n
 * bytes from src; and src does not need to be
 * null-terminated if it contains n or more bytes
 * @src: pointer to string 1
 * @dest: pointer to string 2
 * @n: input number to detect character will be
 *	concatenates
 * Return: pointer dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int ch, ch1;

	ch = 0;
	while (dest[ch])
		ch++;
	for (ch1 = 0; ch1 < n && src[ch1] != '\0'; ch1++)
		dest[ch + ch1] = src[ch1];
	dest[ch + ch1] = '\0';

	return (dest);
}
