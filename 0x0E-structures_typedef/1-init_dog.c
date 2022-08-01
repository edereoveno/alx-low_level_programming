#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize struct dog
 * @d: pointer to variable
 * @name: pointer to name
 * @age: age elemennt
 * @owner: owner
 * Return: variable
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
