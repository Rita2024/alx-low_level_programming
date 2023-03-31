#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_buffer - functions that print buffer
 * @b: parameter 1
 * @size: parameter 2
 * Return: result
 */

void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
		printf("\n");
		return;
	}

	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x  ", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				printf("%02x ", b[i + j] & 0xff);
			}
			else
			{
				printf("   ");
			}
		}

		printf(" ");

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				char c = b[i + j];
				if 
					(isprint(c))
				{
					printf("%c", c);
				}
				else
				{
					printf(".");
				}
			}
			else
			{
				printf(" ");
			}
		}

		printf("\n");
	}
}
