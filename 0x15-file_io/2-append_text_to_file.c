#include "main.h"
/**
 * append_text_to_file - a function that append a text in the end a file.
 * @filename: name file
 * @text_content: string
 * Return: 1 on success -1 in failaure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fr1, fr2;


	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		return (1);
	}
	if (text_content != NULL)
	{
		fr1 = open(filename, O_CREAT | O_WRONLY | O_APPEND);
		fr2 = write(fr1, text_content, strlen(text_content));
	}
	if (fr1 == -1 || fr2 == -1)
	{
		return (-1);
	}
	close(*filename);
	return (1);
}
