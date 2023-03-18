#include "main.h"
#include "stdlib.h"
/**
 * malloc_checked - allocates memory
 * @b: number of bytes to allocate
 */
void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(sizeof(int) * b);
	if (a == NULL)
		exit(98);
	return (a);
}
