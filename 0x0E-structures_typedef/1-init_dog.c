#include "dog.h"
/**
 * init_dog - declare structure
 * @d: atructure
 * @name: the name
 * @age: the age
 * @owner: the owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
