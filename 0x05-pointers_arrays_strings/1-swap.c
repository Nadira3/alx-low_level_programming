#include "main.h"
/**
 * swap_int - swaps the values of two integer variables
 * @a: first integer
 * @b: sexond integer
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
