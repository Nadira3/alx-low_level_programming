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
		printf("Age: %f\n", d->age);
		if (d->owner == NULL) 
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
