#include "main.h"
#include <limits.h>
/**
 * arrange_range - allocate nmemb bytes for array elements
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int i, arr_size;
	int *int_ptr;

	if (min > max || min == 0 || max == 0)
		return (NULL);
	arr_size = (max - min) + 1;
	if (arr_size > INT_MAX)
		return (NULL);
	int_ptr = malloc(sizeof(int) * arr_size);
	if (int_ptr == NULL)
		return (NULL);
	for (i = 0; min < max; i++, min++)
		int_ptr[i] = min;
	return (int_ptr);
}
