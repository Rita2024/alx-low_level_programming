#include "main.h"
#define BUFFER_SIZE 1024
/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int fp_from, fp_to, nread, nwrite;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_ton"), exit(97);

	fp_from = open(argv[1], O_RDONLY);

	if (fp_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %sn", argv[1]), exit(98);

	fp_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fp_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %sn", argv[2]), exit(99);

	while ((nread = read(fp_from, buffer, BUFFER_SIZE)) > 0)
	{
		nwrite = write(fp_to, buffer, nread);

		if (nwrite == -1 || nwrite != nread)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %sn", argv[2]), exit(99);
		}
	}
	if (nread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %sn", argv[1]), exit(98);
	}
	if (close(fp_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fp %dn", fp_from), exit(100);
	}
	if (close(fp_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fp %dn", fp_to), exit(100);
	}
	return (0);
}
