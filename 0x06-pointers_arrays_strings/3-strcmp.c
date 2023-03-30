#include "main.h"

/**
 * _strcmp - functions that compare two sting
 * @s1: first string
 * @s2: second string
 * Return: the result
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return ((int)(unsigned char)s1[i] - (int)(unsigned char)s2[i]);
}
