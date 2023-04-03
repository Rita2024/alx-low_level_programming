#include "main.h"

/**
 * _memcpy - functions that copies byte from memory area
 * @dest: a pointer the byte is copied to
 * @src: a pointer the byte is copied from
 * @n: number of bytes to be copied
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
