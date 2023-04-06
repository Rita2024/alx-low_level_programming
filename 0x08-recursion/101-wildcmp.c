#include "main.h"
#include <stdio.h>

/**
 * wildcmp - main function
 * @s1: string 1
 * @s2: string 2
 * Return: the result
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		while (*s1 != '\0')
		{
			if (wildcmp(s1, s2 + 1))
			{
				return (1);
			}
			++s1;
		}
		return (wildcmp(s1, s2 + 1));
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
