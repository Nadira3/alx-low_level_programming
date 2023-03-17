#include "main.h"
#include "stdlib.h"
/**
*/
void *malloc_checked(unsigned int b)
{
	int *a;
	char *p;
	float *c;
	double *d;

	a = malloc(sizeof(int) * b);
	if (a == NULL)
		exit(98);
	return (a);
	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
	c = malloc(sizeof(float) * b);
	return (c);
	if (c == NULL)
		exit(98);
	d = malloc(sizeof(double) * b);
	return (d);
	if (d == NULL)
		exit(98);
}
