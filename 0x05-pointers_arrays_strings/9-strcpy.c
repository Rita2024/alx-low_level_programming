#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy a string
 * @dest: Destination value
 * @src: source value
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int r;

	for (r = 0 ; src[r] != '\0' ; r++)
	{
		dest[r] = src[r];
	}
	dest[r++] = '\0';
	return (dest);
}
