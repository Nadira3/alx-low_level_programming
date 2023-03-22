#include "dog.h"
/**
 * print_dog - prints members lf a struct named dog
 * @d: name of struct
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		d->name == NULL ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
		isnan(d->age) ? printf("Name: (nil)\n") : printf("Age: %f\n", d->age);
		d->owner == NULL ? printf("Name: (nil)\n") : printf("Owner: %s\n", d->owner);
	}
}
