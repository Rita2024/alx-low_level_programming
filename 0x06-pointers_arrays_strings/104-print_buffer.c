#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_buffer - function that prints a buffer
 * @b: parameter 1
 * @size: parameter 2
 * Return: result
 */


void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x ", i);

	for (j = i; j < i + 10 && j < size; j++)
	{
		printf("%02x ", (unsigned char)b[j]);
	}

	for (; j < i + 10; j++)
	{
		printf("   ");
	}

	printf(" ");

	for (j = i; j < i + 10 && j < size; j++)
	{
		if (isprint(b[j]))
		{
			printf("%c", b[j]);
		}
		else
		{
			printf(".");
		}
	}

	printf("\n");
	}
}

