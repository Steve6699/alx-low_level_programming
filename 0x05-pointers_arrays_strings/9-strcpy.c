#include "main.h"

/**
 * *_strcpy - that copies the string pointed to
 * by src, including the terminating null byte
 * (\0), to the buffer pointed to by dest
 * @src: pointer to string will coped
 * @dest: pointer to box to be print insde
 * Return: pointer dest
*/

char *_strcpy(char *dest, char *src)
{
	int c = -1;

	do {
		c++;
		dest[c] = src[c];
	} while (src[c] != '\0');
	return (dest);
}
