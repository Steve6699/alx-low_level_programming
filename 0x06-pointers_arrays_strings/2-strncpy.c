include "main.h"

/**
 * *_strncpy - function copy string and put it in
 * other pointer
 * @src: pointer to string will take copy from
 * @dest: box will copy inside
 * @n: input to declere how many character copy
 * Return: pointer dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int ch;

	for (ch = 0; (ch < n) && (src[ch] != '\0'); ch++)
		dest[ch] = src[ch];

	while (ch < n)
	{
		dest[ch] = '\0';
		ch++;
	}

	return (dest);
}
