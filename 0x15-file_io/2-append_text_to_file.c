#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the filename.
 * @text_content: text content of the file.
 * Return: 1 if the file exists. -1 if the file does not exist
 * or if it fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, arr = 0;
	int bwr;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);

	if (fp == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[arr])
		{
			arr++;
		}

		bwr = write(fp, text_content, arr);
		if (bwr == -1)
		{
			return (-1);
		}
	}
	close(fp);
	return (1);
}
