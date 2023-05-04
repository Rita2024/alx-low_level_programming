#include "main.h"
#include <stdio.h>

/**
 * get_endianness - function that checks the endianness.
 * Return: result
 */

int get_endianness(void)
{
	unsigned int x = 1;

	char *c = (char *)&x;

	if (*c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
