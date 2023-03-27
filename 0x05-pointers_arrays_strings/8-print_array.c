#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n element of an array of integers
 * @a: Array of integers
 * @n: number of elements of the array needed to print
 * Return: empty
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
