#include "main.h"
#include <limits.h>
/**
 * _calloc - allocate nmemb bytes for array elements
 * @nmemb: no of array elements
 * @size: size of array
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, arr_size;
	void *ptr;
	int *int_ptr;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	arr_size = nmemb * size;
	if (arr_size > INT_MAX)
		return (NULL);
	ptr = malloc(arr_size);
	if (ptr == NULL)
		return (NULL);
	int_ptr = (int *)ptr;
	for (i = 0; i < arr_size; i++)
		int_ptr[i] = 0;
	return (ptr);
}
