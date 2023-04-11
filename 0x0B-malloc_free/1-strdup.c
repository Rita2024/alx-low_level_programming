#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to the duplicated string
 * @str: the duplicated string
 * Return: the duplicated string or NULL
 */

char *_strdup(char *str)
{
	int x = 0, y = 1;

	char *r;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[y])
	{
		++y;
	}

	r = malloc((y * sizeof(char)) + 1);
	{
		if (r == NULL)
			return (NULL);
	}

	while (x < y)
	{
		r[x] = str[x];
		++x;
	}
	r[x] = '\0';
	return (r);
}
