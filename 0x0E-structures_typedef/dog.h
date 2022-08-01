#ifndef HEADER_FILE
#define HEADER_FILE dog.h
/**
 * struct dog - define dog structure with three elements
 * @name: name of dog
 * @age: age
 * @owner: owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
