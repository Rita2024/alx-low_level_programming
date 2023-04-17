#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - dog to be freed
 * @d: struct dog
 * Return: result
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d);
	}
}

