#include "dog.h"
/**
 * print_dog - prints members lf a struct named dog
 * @d: name of struct
 */
void print_dog(struct dog *d)
{
	dog *gee = d;
	gee->name == NULL ? printf("(nil)\n") : printf("Name: %s\n", gee->name);
	isnan(gee->age) ? printf("(nil)\n") : printf("Age: %f\n", gee->age);
	gee->owner == NULL ? printf("(nil)\n") : printf("Name: %s\n", gee->owner);
}