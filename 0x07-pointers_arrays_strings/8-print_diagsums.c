#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - main function
 * @a: parameter
 * @size: size of the parameter
 * Return: result
 */

void print_diagsums(int *a, int size)
{
	int x, sum1 = 0, sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 += *(a + x * size + x);
		sum2 += *(a + x * size + (size - x - 1));
	}
	printf("sum of diagonal 1: %d\n", sum1);
	printf("sum of diagonal 2: %d\n", sum2);
}
