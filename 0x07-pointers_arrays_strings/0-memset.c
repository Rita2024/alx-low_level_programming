#include "main.h"

/**
 * _memset - functions that fill memory with constant byte
 * @s: a pointer to the memory area to be filled
 * @b: the constant byte value to fill the memory with
 * @n: number of byte to fill
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n ; a++)
	{
		s[a] = b;
	}
	return (s);
}
