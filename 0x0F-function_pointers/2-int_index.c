#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that searches for an integer
 * @array: input array
 * @size: the number of element in the array
 * @cmp: pointer to function
 * Return: result
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int e;

	if (array == NULL && cmp == NULL)
	{
		return (0);
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (e = 0; e < size; ++e)
	{
		if (cmp(array[e]))
			return (e);
	}

	return (-1);
}
