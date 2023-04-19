#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function.
 * @argc: argument count
 * @argv: argument vector
 * Return: zero (0)
 */

int main(int argc, char *argv[])
{
	char *arg = (char *)main;
	int e, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (e = 0; e < bytes; ++e)
	{
		printf("%02hx", arg[e] & 0xFF);
		if (e != bytes - 1)
			printf(" ");
	}

	printf("\n");

	return (0);
}
