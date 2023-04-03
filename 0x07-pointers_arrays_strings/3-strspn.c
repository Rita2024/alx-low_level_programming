#include "main.h"
#include <stdio.h>

/**
 * _strspn - functions that get the length of a prefix substring
 * @s: the pointer
 * @accept: the byte
 * Return: lens
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int lens = 0;
	char *plen;

	while (*s)
	{
		plen = accept;

		while (*plen)
		{
			if (*s == *plen)
			{
				lens++;
				break;
			}
			plen++;
		}

		if (!*plen)
		{
			break;
		}
		s++;
	}
	return (lens);
}
