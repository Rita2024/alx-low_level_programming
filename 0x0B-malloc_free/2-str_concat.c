#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - concatenates two string
 * @s1: string 1
 * @s2: string 2
 * Return: the two strings concatenated or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0;

	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		++a;
	while (s2[b])
		++b;

	d = a + b;

	result = malloc((d * sizeof(char)) + 1);
	{
		if (result == NULL)
			return (NULL);
	}
	b = 0;

	while (c < d)
	{
		if (c <= a)
			result[c] = s1[c];
		if (c >= a)
		{
			result[c] = s2[b];
			++b;
		}
		++c;
	}
	result[c] = '\0';
	return (result);
}
