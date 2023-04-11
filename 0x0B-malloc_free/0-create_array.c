#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: the size of the array
 * @c: the char to be filled with array
 * Return: the filled array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));
	{
		if (arr == NULL)
			return (NULL);
	}

	for (a = 0; a < size; a++)
	{
		arr[a] = c;
	}

	return (arr);
}
