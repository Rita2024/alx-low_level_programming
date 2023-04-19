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
	int e, nbytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (e = 0; e < nbytes; ++e)
	{
		if (e == nbytes - 1)
		{
			printf("%02hx\n", arg[e]);
			break;
		}
		printf("%2hx", arg[e]);
	}

	return (0);
}
