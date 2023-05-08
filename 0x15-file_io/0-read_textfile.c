#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 * @filename: the filename.
 * @letters: numbers of letters it should read and write.
 * Return: actual number of letters it could read and print, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t brd, bwr;
	char *buffer;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));

	if (buffer == NULL)
		return (0);

	brd = read(fp, buffer, letters);
	bwr = write(STDOUT_FILENO, buffer, brd);

	close(fp);
	free(buffer);
	return (bwr);
}
