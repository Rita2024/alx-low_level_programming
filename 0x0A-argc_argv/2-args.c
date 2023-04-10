#include "main.h"
#include <stdio.h>

/**
 * main - functions that prints all arguments it receives.
 * @argc: argument count
 * @argv: argument vector
 * Return: the result
 */

int main(int argc, char *argv[])
{
	int r;

	for (r = 0; r < argc; r++)
	{
		printf("%s\n", argv[r]);
	}

	return (0);
}
