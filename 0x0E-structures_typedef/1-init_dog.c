#include "dog.h"
/**
 * init_dog - initializes the Struct dog type
 * @d: struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *gee = d;

	if (name != NULL)
		gee->name = name;
	gee->age = age;
	if (owner != NULL)
		gee->owner = owner;
}
