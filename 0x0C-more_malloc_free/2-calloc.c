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
	char *char_ptr;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	arr_size = nmemb * size;
	if (arr_size > INT_MAX)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	if (size == sizeof(char))
		char_ptr = (char *)ptr;
	else
		int_ptr = (int *)ptr;
	for (i = 0; i < nmemb; i++)
	{
		if (size > 1)
			int_ptr[i] = 0;
		else
			char_ptr[i] = 0;
	}
	return (ptr);
}
