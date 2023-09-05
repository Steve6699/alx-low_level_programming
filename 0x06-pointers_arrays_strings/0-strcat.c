#include "main.h"

/**
 * *_strcat - function that concatenates two
 * strings
 * @src: pointer to string 1
 * @dest: pointer to string 2
 * Return: pointer dest
*/

char *_strcat(char *dest, char *src)
{
	int ch, ch1;

	ch = 0;
	while (dest[ch])
		ch++;
	for (ch1 = 0; src[ch1]; ch1++)
		dest[ch++] = src[ch2];
	return (dest);
}
