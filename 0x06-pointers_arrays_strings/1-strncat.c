#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * @n: number of characters to be appended
 * Return: the result of string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	 char *ptr = dest;
	 int i = 0;

	while
		(*ptr != '\0')
	{
ptr++;
	}

	while
		(i < n && *src != '\0')
	{
		 *ptr++ = *src++;
		 i++;
	}
	*ptr = '\0';
	return (dest);
}
