#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - functions that multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: result
 */

int main(int argc, char *argv[])
{
	int nx = 0, ny = 0;

	if (argc == 3)
	{
		nx = atoi(argv[1]);
		ny = atoi(argv[2]);
		printf("%d\n", nx * ny);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
