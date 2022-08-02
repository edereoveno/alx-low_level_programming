#include "dog.h"
#include <string.h>
#include <stdlib.h>



dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	return (d);
}
