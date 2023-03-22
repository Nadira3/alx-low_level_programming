#include "dog.h"
#include <stddef.h>
#include <stdio.h>
#include <math.h>
/**
 * print_dog - prints members lf a struct named dog
 * @d: name of struct
 */
void print_dog(struct dog *d)
{
	d.name == NULL ? printf("(nil)\n") : printf("Name: %s\n", d.name);
	isnan(d.age) ? printf("(nil)\n") : printf("Age: %f\n", d.age);
	d.owner == NULL ? printf("(nil)\n") : printf("Name: %s\n", d.owner);
}
