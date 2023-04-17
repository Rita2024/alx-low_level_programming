#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the owner of the dog
 * Return: new dog or NULL (fails)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	int a, oldname, realowner;

	new_dog = malloc(sizeof(*new_dog));
	if (new_dog == NULL || !(name) || !(owner))
	{
		free(new_dog);
		return (NULL);
	}

	for (oldname = 0; name[oldname]; ++oldname)
		;

	for (realowner = 0; owner[realowner]; ++realowner)
		;

	new_dog->name = malloc(oldname + 1);
	new_dog->owner = malloc(realowner + 1);

	if (!(new_dog->name) || !(new_dog->owner))
	{
		free(new_dog->owner);
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (a = 0; a < oldname; ++a)
		new_dog->name[a] = name[a];
	new_dog->name[a] = '\0';

	new_dog->age = age;

	for (a = 0; a < realowner; ++a)
		new_dog->owner[a] = owner[a];
	new_dog->owner[a] = '\0';

	return (new_dog);
}
