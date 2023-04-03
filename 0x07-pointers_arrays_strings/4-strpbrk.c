#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strpbrk - functions that searches of a string for any of a set of bytes
 * @s: the pointer
 * @accept: the byte
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s != '\0')
	{
		for (p = accept; *p != '\0'; p++)
		{
			if (*s == *p)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}

