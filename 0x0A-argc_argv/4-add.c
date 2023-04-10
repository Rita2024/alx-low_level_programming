#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - functions that adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: result
 */

int main(int argc, char *argv[])
{
	int a;
	unsigned int b, sum = 0;
	char *x;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			x = argv[a];

			for (b = 0; b < strlen(x); b++)
			{
				if (x[b] < 48 || x[b] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(x);
			++x;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
