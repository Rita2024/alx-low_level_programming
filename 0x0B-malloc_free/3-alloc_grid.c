#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - two dimensional array of integers
 * @width : the width of the integer
 * @height: height of the integer
 * Return: result;
 */

int **alloc_grid(int width, int height)
{
	int a, b, c, d;

	int **result;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	result = malloc(height * sizeof(int *));
	if (result == NULL)
	{
		free(result);
		return (NULL);
	}

	for (a = 0; a < height; ++a)
	{
		result[a] = malloc(width * sizeof(int));
		if (result[a] == NULL)
		{
			for (b = a; b >= 0; ++b)
			{
				free(result[b]);
			}
			free(result);
			return (NULL);
		}
	}

	for (c = 0; c < height; ++c)
	{
		for (d = 0; d < width; ++d)
		{
			result[c][d] = 0;
		}
	}
	return (result);
}
