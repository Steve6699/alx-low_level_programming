#include "main.h"

/**
 * read_textfile - read tet from file and print is
 * @filename: the name of file will be read from
 * @letters: number of letter will be read
 * Return: byte read or printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t byte;
	char bufs[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (-1);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (-1);
	byte = read(f, &bufs[0], letters);
	byte = write(STDOUT_FILENO, &bufs[0], byte);
	close(f);
	return (byte);
}
