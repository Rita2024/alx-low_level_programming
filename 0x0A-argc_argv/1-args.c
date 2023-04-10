#include "main.h"
#include <stdio.h>

/**
 * main - functions that prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument vector
 * Return: result
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
