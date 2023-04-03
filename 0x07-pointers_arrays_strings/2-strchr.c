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
	while (*s != '\0')
	{
		if (*s == c)
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
