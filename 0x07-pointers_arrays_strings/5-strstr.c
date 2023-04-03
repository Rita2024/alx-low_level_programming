#include "main.h"
#include <stdio.h>

/**
 * _strstr - functions that locates a substring
 * @haystack: a pointer to the substring
 * @needle: the string
 * Return: NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int x, y, z;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		y = x;
		z = 0;
		while (needle[z] != '\0' && haystack[y] == needle[z])
		{
			y++;
			z++;
		}
		if (needle[z] == '\0')
		{
			return (&haystack[x]);
		}
	}
	return (NULL);
}
