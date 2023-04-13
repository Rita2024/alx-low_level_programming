#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: the minimum array
 * @max: the maximum array
 * Return: result
 */

int *array_range(int min, int max)
{
	int *x, y = 0;

	if (min > max)
		return (NULL);
	x = malloc(((max - min) * sizeof(int)) + sizeof(int));

	if (x == NULL)
		return (NULL);
	while (min <= max)
	{
		x[y] = min;
		++y;
		++min;
	}
	return (x);
}
