#include "main.h"
#include <limits.h>
/**
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int arr_size;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr_size = nmemb * size;
	if (arr_size > INT_MAX)
		return (NULL);
	ptr = (int *)malloc(sizeof(int) * arr_size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
