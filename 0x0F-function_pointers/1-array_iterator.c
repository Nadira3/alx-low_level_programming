#include "function_pointers.h"
/**
 * array_iterator - iterates through an array
 * @array: array pointer
 * @size: size of array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}

}
