#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function given as a parameter on each element of an array.
 * @array: input array
 * @size: size of the array
 * @action: pointer to function
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int e;

	if (array && action)

		for (e = 0; e < size; ++e)
		{
			action(array[e]);
		}
}
