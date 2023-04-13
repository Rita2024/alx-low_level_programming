#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of string
 * Return: result
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0, x = 0, y = 0, z = 0;

	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		++a;

	while (s2[y])
		++y;

	if (n >= y)
		z = a + y;
	else
		z = a + n;

	str = malloc(z * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);

	y = 0;
	while (x < z)
	{
		if (x <= a)
			str[x] = s1[x];

		if (x >= a)
		{
			str[x] = s2[y];
			++y;
		}
		++x;
	}
	str[x] = '\0';
	return (str);
}
