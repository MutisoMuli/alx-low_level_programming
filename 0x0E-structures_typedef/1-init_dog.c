#include <stdlib.h>
#include "dog.h"

/**
 *init_dog - Initialize a dog structure with provided information.
 * @d: Pointer to a struct dog to be initialized.
 * @name: Name of the dog to set.
 * @age: Age of the dog to set.
 * @owner: Owner's name of the dog to set.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
