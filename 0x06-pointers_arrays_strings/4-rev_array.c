#include "main.h"

/**
 * reverse_array - functions that reverse an array
 * @a: A pointer to the first element of an array
 * @n: the number of elements in the array
 * Return: the result
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
