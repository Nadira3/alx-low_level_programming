#include "main.h"
#include "stdlib.h"
/**
 * malloc_checked - allocates memory
 * @b: number of bytes to allocate
 */
void *malloc_checked(unsigned int b)
{
		(int*)malloc(sizeof(int) * b);
		(char *)malloc(b);
		(float *)malloc(sizeof(float) * b);
		(double *)malloc(sizeof(double) * b);
		exit(98);
}
