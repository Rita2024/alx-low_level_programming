#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap the values of two integers
 * @a: the first integer to be swapped
 * @b: the second integer to be swapped
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int main = *a;
	*a = *b;
	*b = main;
}
