#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 characters
 * Return: the converted number, or 0 if there is an invalid character
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int tmp = 0;
	int x;

	if (b == NULL)
	{
		return (0);
	}
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] == '0' || b[x] == '1')
		{
			tmp <<= 1;
			tmp += (b[x] - '0');
		}
		else
		{
			return (0);
		}
	}
	return (tmp);
}
