#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Elementos of dog.
 * @d: Value name variable.
*/
void print_dog(struct dog *d)
{

	if (d == NULL)
	return;
	if (d->name == NULL)
		d->name = "(nil)";
		if (d->name == NULL)
			d->owner = "(nill)"

		printf("name: %s\n age: %f\n owner: %s\n", d->name, d->age, d->owner)"
}
