#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: the number of member
 * @size: size of the array
 * Return: result
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a = 0, x = 0;

	char *y;

	if (nmemb == 0 || size == 0)
		return (NULL);
	x = nmemb * size;
	y = malloc(x);

	if (y == NULL)
		return (NULL);
	while (a < x)
	{
		y[a] = 0;
		++a;
	}
	return (y);
}
