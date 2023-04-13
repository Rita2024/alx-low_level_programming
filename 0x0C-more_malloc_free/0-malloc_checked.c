#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the parameter
 * Return: result
 */

void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(b);

	if (t == NULL)
		exit(98);

	return (t);
}
