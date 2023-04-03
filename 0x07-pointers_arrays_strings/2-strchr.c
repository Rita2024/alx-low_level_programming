#include <stdio.h>
#include "main.h"

/**
 * _strchr - functions that locates a character in a string
 * @s: the string
 * @c: the character
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
