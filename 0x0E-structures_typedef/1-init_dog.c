#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Elementos of dog.
 * @name: Dog name.
 * @age: Dog age.
 * @owner: Dog owner.
 * @d: Value name variable.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
