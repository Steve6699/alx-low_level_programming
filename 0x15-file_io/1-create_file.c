#include "main.h"

/**
 * strLen - return length off string
 * @x: str
 *
 * Return: int
*/

int strLen(char *x)
{
	int a;

	if (!x)
		return (0);
	while (*x++)
		a++;
	return (a);
}

/**
 * create_file - create file
 * @filename: name file will be create
 * @text_content: text will be written in file
 *
 * Return: 1 if success 0 on fail
*/

int create_file(const char *filename, char *text_content)
{
	int f;
	ssize_t byte = 0, lenn = strLen(text_content);

	if (!filename)
		return (-1);
	f = open(filename, 0_WRONLY | 0_CREAT | 0_TRUNC, S_IRUSR | S_IWUSR);
	if (f == -1)
		return (-1);
	if (lenn)
		byte = write(f, text_content, lenn);
	close(f);
	return (byte == lenn ? 1 : -1);
}

