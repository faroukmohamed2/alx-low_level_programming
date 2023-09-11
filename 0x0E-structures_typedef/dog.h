#ifndef _DOG_H
#define _DOG_H
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * struct dog - declare variables
 * @name: the name
 * @age: the age
 * @owner: the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif